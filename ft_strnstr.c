#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	char	*dest;
	size_t	j;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(haystack) + 1));
	dest = (char *)haystack;
	i = 0;
	if (!*needle)
		return (dest);
	while (*dest && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && (j + i) < len)
		{
			if (haystack[i + j] != needle[j])
				break;
			if (needle[j + 1] == '\0')
				return (dest);
			j++;
		}
		dest++;
		i++;
	}
	return (NULL);
}