#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *src, int c, size_t n)
{
	char *str1;
	char *str2;

	str1 = (char *)dst;
	str2 = (char *)src;
	while (n-- > 0)
	{
		*str1 = *str2;
		if (*str1 == (char)c)
			return (++str1);
		str1++;
		str2++;
	}
	return (NULL);
}
