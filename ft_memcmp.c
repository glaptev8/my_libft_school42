/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:31:56 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/09 12:31:58 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	if (n == 0)
		return (0);
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (n-- > 0 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return ((int)(*str1 - *str2));
}
