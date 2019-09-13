/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:09:51 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/13 10:53:25 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_int(int n)
{
	int i;

	i = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	int				size;
	unsigned int	nb;
	int				index;

	size = count_int(n);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1 + (n > 0 ? 0 : 1)))))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		nb = (unsigned int)-n;
		size++;
	}
	else
		nb = n;
	index = size - 1;
	while (nb >= 10)
	{
		str[index--] = nb % 10 + '0';
		nb /= 10;
	}
	str[index] = nb + '0';
	str[size] = '\0';
	return (str);
}
