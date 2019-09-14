#include "libft.h"

t_list	*ft_nextstrcut(t_list *list)
{
	if (list)
		return (list->next);
	return (NULL);
}