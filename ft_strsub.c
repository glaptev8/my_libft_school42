/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:10:33 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/17 13:29:05 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;

	i = 0;
	if (!s || !(ret = ft_strnew(len)))
		return (0);
	while (i++ < len)
		ret[i - 1] = s[i - 1 + (size_t)start];
	ret[i - 1] = '\0';
	return (ret);
}
