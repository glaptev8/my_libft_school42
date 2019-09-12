/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:10:01 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/12 16:33:25 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *s, char c)
{
	int	i;
	int	count_words;

	i = 0;
	count_words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
		count_words++;
	}
	return (count_words);
}

static	char	*get_word(const char *s, char c, int j)
{
	int		i;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	while (s[j - 1] != c && j != 0)
		j--;
	while (s[j] != c && s[j] != '\0')
		str[i++] = s[j++];
	str[i] = '\0';
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		count_word;
	int		i;
	int		j;

	j = 0;
	i = 0;
	count_word = count_words(s, c);
	words = (char **)malloc(sizeof(char *) * (count_word + 1));
	while (count_word > i)
	{
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j] != '\0')
			j++;
		words[i] = get_word(s, c, j);
		i++;
	}
	words[i] = NULL;
	i = 0;
	return (words);
}
