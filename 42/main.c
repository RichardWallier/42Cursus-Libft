#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	char	str2[] = "bounjour";

	printf("%s\n", strrchr(str2, 'o'));
	printf("%s\n", ft_strrchr(str2, 'o'));

	char	str3[] = "bounjourno";
	printf("%s\n", ft_strrchr(str3, 'o'));

}
