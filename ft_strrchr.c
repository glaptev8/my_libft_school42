#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*dest;
	int		len;
	int i;

	i = 0;
	len = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	dest = ft_strcpy(dest, (char *)s);
	while (*dest)
		dest++;
	while (i < len)
	{
		if (*dest == c)
			return (dest);
			dest--;
		i++;
	}
	return (NULL);
}
