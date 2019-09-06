#include "libft.h"

int		ft_isalnum(int c)
{
	if (c > 31 || c < 127)
		return (1);
	return (0);
}
