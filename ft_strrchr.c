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
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	while (*s)
		s++;
	while (i <= len)
	{
		if (*s == c)
			return ((char *)s);
		s--;
		i++;
	}
	return (NULL);
}
