#include "libft.h"

int	ft_atoi(char *str)
{
	long int	res;
	int			i;
	int			sign;

	i = 0;
	res = 0;
	sign = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\v' || *str == '\f')
	str++;
	if (*str == '-')
		sign++;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	if (sign % 2 == 0)
		sign = 1;
	else
		sign = -1;
	return (sign * res);
}
