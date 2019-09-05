/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:51:25 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/05 18:58:53 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t size)
{
	int i;

	i = 0;
	while (size - 1 > 0)
	{
		dst[i] = src[i];
		size--;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src) - i);
}
