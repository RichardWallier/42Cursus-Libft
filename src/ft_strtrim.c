#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trimmed;
	unsigned int	offset;
	unsigned int	lastoffset;
	unsigned int	index;
	unsigned int	index2;

	index = 0;
	index2 = 0;
	offset = 0;
	lastoffset = ft_strlen(s1) - 1;
	trimmed = (char *)malloc(ft_strlen(s1));
	ft_strlcpy(trimmed, s1, ft_strlen(s1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	return (trimmed);
}

#include <stdio.h>
int	main(void)
{
	char	*str = "aaaabcWelcome abc42abc";
	char	*set = "abc";

	printf("%s", ft_strtrim(str, set));
}
