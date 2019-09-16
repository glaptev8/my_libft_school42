/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:50:05 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/16 12:50:16 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	*ft_str_copy(void const *content, size_t content_size)
{
	unsigned char	*str;
	unsigned char	*str2;
	int				i;

	i = 0;
	str = (unsigned char *)malloc(sizeof(content) * content_size);
	if (!str)
		return (NULL);
	str2 = (unsigned char *)content;
	while (str2[i] != '\0')
	{
		str[i] = str2[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
