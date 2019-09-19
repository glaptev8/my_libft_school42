/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:52:07 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/16 12:52:21 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	tmp = *alst;
	if (*alst && del)
	{
		while (*alst)
		{
			tmp = *alst;
			ft_lstdelone(&tmp, del);
			*alst = (*alst)->next;
		}
		*alst = NULL;
	}
}
