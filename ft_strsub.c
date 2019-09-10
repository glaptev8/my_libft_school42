#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *str;

	if (s == NULL)
		return (NULL);
	i = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
