#include "libft.h"

size_t	ft_strlen(char *str)
{
	unsigned int index;

	index = 0;
	while (str[index])
		index ++;
	return ((size_t)index);
}
