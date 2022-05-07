#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t destsize)
{
	int		index;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	while ((dest[index] || src[index]) && index < destsize - 1)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (srcsize);
}
