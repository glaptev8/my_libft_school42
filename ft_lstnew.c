/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:50:27 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/17 13:19:30 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	*ft_str_copy(void const *content, size_t content_size)
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

t_list					*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	if (!content)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
		if (!(list->content = ft_str_copy(content, content_size)))
		{
			free(list);
			return (NULL);
		}
		list->content_size = content_size;
	}
	list->next = NULL;
	return (list);
}
