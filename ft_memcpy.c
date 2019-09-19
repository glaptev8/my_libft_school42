/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:31:35 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/16 12:23:55 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (!str1 && !str2)
		return (NULL);
	while (n-- > 0)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	return (dst);
}
