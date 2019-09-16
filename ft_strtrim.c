/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:10:16 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/16 12:23:55 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		q;

	i = 0;
	if (s)
	{
		str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
		if (!str || !s)
			return (NULL);
		while (s[i] != '\0' && (s[i] == '\n' || s[i] == '\t' || s[i] == ' '))
			i++;
		j = ft_strlen(s) - 1;
		while (j > 0 && s[j] && (s[j] == '\n' || s[j] == '\t' || s[j] == ' '))
			j--;
		q = 0;
		while (i <= j)
			str[q++] = s[i++];
		str[q] = '\0';
		return (str);
	}
	else
		return (NULL);
}
