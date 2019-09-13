/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:31:27 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/09 12:38:56 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*str1;
	unsigned char		*str2;

	str1 = (unsigned char*)dst;
	str2 = (unsigned char*)src;
	if (!str1 && !str2)
		return (NULL);
	i = 0;
	if (str2 < str1)
		while (++i <= len)
			str1[len - i] = str2[len - i];
	else
		while (len-- > 0)
			*(str1++) = *(str2++);
	return (dst);
}
