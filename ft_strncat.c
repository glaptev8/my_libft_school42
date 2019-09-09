/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:04:10 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/09 12:30:06 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t len;
	int i;

	i = 0;
	len = ft_strlen(dest);
	while (n > 0)
	{
		dest[len++] = src[i++];
		--n;
	}
	return (dest);
}
