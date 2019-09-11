#include "libft.h"

static int		inverter(int n)
{
	int invert_n;

	invert_n = 0;
	while (n / 10 != 0)
	{
		invert_n = invert_n * 10 + (n % 10);
		n /= 10;
	}
	invert_n = invert_n * 10 + n;
	return (invert_n);
}

static int		count_int(int n)
{
	int i;

	i = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int invert_n;
	char *str;
	int i;

	str = (char *)malloc(sizeof(char) * (count_int(n) + 1));
	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i++;
	}
	invert_n = inverter(n);
	while (invert_n / 10 != 0)
	{
		str[i] = invert_n % 10 + '0';
		i++;
		invert_n /= 10;
	}
	str[i] = invert_n + '0';
	str[i + 1] = '\0';
	return (str);
}