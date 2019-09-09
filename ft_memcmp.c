#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1;
	char *str2;

	if (n == 0)
		return (0);
	str1 = (char*)s1;
	str2 = (char*)s2;
	while (n-- > 0 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return ((int)(*str1 - *str2));
}
