#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	dest = ft_strcpy(dest, (char *)s);
	while(*dest || *dest == '\0')
	{
		if (*dest == c)
			return (dest);
		dest++;
	}
	return (NULL);
}
