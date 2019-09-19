/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:28:41 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/16 12:23:55 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	char	*dest;
	int		j;

	dest = (char *)haystack;
	i = 0;
	if (!*needle)
		return (dest);
	while (*dest)
	{
		j = 0;
		while (haystack[i + j] && needle[j])
		{
			if (haystack[i + j] != needle[j])
				break ;
			if (needle[j + 1] == '\0')
				return (dest);
			j++;
		}
		dest++;
		i++;
	}
	return (NULL);
}
