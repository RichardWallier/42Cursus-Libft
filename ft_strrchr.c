#include "libft.h"
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    size_t        sz_temp;
    
	sz_temp = ft_strlen((char*)s);
	while(sz_temp >= 0)
	{
		if(s[sz_temp] == c)
			return (char *)&s[sz_temp];
		sz_temp--;
	}
	return (0);
}

#include <string.h>
int main()
{
    char str[] = "teste 42 rio";
    char* teste = ft_strrchr(str, '4');
    char* teste2 = strrchr(str, '4');
    printf("%s\n", teste);
    printf("%s\n", teste2);
    return (1);
}
