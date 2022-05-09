#include "libft.h"

void	*ft_memset(void *dest, int c, unsigned int offset)
{
	unsigned char	*pointer;

	pointer = dest;
	while (offset-- > 0)
		*pointer++ = c;
	return (dest);
}
