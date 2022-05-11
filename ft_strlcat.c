#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t maxlen)
{
	size_t	srclen;
	size_t	dstlen;
	unsigned int index;

	if (dstlen <= maxlen)
		return (maxlen + srclen);
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dest);
	index = 0;
	while (src[index] && dstlen < maxlen - 1)
		dest[dstlen++] = src[index++];
	dest[dstlen] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[index]));
}

/*
#include <stdio.h>
int main(void)
{
    char dest[20] = "Welcome ";
    char str[] = "Coder";
    size_t rvalue;
    printf("Before: dest = %s\n", dest);
    rvalue = ft_strlcat(dest, str, 10);
    printf("After: dest = %s\n", dest);
    printf("%zu\n", rvalue);
    return (0);
}
*/
