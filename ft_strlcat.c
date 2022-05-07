#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t maxlen)
{
	size_t	srclen;
	size_t	dstlen;
	unsigned int index;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dest);
	index = 0;
	if (dstlen == maxlen)
		return (maxlen + srclen);
	if (srclen < (maxlen - dstlen))
		dest[dstlen + index] = src[index];
	dest[dstlen + index] = '\0';
	return (dstlen + srclen);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[50] = "Welcome ";
	char	dest[50] = "Coder";
	size_t	size = ft_strlcpy(str, dest, 14);
	printf("dest = %s\n str = %s\n size = %li\n", dest, str, size);
}
