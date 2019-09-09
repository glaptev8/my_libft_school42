#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *src, size_t n)
{
	char *str1;
	char *str2;

	str1 = (char *)dst;
	str2 = (char *)src;
	while (n-- > 0)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	return (dst);
}
