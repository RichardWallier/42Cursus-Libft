#include "libft.h"

char	*ft_itoa(int n)
{
	char	*character;
	char	*ret;

	ret = malloc(10);
	character = "\0";
	if (n < 10)
	{
		character = ft_atoi(n + 48);
		ft_strjoin(ret, character);
		return (ret) ;
	}
	// else
	// 	ft_itoa(n / 10);
	// ft_itoa(n % 10);

	return (ret);
}

#include <stdio.h>
int	main(void)
{
	char	*nbr;

	nbr = ft_itoa(8);

	printf("test: %s\n", nbr);
}
