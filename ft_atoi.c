#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned int num;
	int sign;

	num = 0;
	sign = 1;
	while (*str && *str >= 9 && *str <= 13)
		str++;
	if (*str == '-')
	{
		str++;
		sign = -1;
	}
	while (*str == '0')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}

	return (num * sign);
}
