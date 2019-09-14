#include "libft.h"

int		ft_structlen(t_list *list)
{
	int i;

	i = 0;
	if (list)
		ft_structlen(list->next);
	return (i++);
}
