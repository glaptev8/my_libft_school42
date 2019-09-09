#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;

	str = (char *)s;
	while (n-- > 0)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	return (0);
}
