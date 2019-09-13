/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:59:00 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/13 11:25:48 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t i;
	size_t l1;
	size_t l2;

	i = 0;
	l1 = ft_strlen(dst);
	l2 = ft_strlen(src);
	if (size <= l1)
		return (l2 + size);
	while (l1 + i + 1 < size && src[i] != '\0')
	{
		dst[l1 + i] = src[i];
		i++;
	}
	dst[l1 + i] = '\0';
	return (l1 + l2);
}
