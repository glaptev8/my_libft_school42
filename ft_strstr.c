#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	char	*dest;
	int		j;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(haystack) + 1));
	dest = (char *)haystack;
	i = 0;
	if (!*needle)
		return (dest);
	while (*dest)
	{
		j = 0;
		while (haystack[i + j] && needle[j])
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
