/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:46:26 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/17 14:26:14 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_push_back(t_list **alst,
		void const *content, size_t content_size)
{
	if (!(*alst))
		*alst = ft_lstnew(content, content_size);
	else if ((*alst)->next)
		ft_push_back(&((*alst)->next), content, content_size);
	else
		(*alst)->next = ft_lstnew(content, content_size);
}
