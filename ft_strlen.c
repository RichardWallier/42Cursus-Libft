#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}
