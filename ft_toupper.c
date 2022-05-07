#include "libft.h"

char	ft_toupper(char c)
{
	if (c >= 'a' &&  c <= 'z')
		return ((c - 32));
	return (c);
}

#include <stdio.h>
int	main(void)
{
	char c = '@';
	printf("%c\n", ft_toupper(c));
}
