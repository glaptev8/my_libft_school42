#include "libft.h"

void	*ft_memseta(void *s, size_t n)
{
	char *str = (char *)s;
	while (n-- > 0)
	{
		*str = 0;
		str++;
	}
	return (s);
}
