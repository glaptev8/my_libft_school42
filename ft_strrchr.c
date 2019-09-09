/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:28:55 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/09 12:41:05 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	dest = ft_strcpy(dest, (char *)s);
	while (*dest)
		dest++;
	while (i < len)
	{
		if (*dest == c)
			return (dest);
			dest--;
		i++;
	}
	return (NULL);
}
