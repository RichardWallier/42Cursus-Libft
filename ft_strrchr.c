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

/*
int main()
{
    char str[] = "teste 42 rio";
    char* teste = ft_strrchr(str, '4');
    printf("%s\n", teste);
    return (1);
}
*/
