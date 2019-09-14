#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = f(lst);
	tmp->next = ft_lstmap(lst->next, f);
	return (tmp);
}