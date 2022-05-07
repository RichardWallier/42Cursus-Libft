char *ft_strchr(const char *s, int c)
{
	char *temp;

	while (*s != c)
	{
		if (!*s++)
			return (char *)'\0';
	}

	return (char *)s;
}

#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "teste 42 rio";
	char* ch = strchr(str, '4');
	char* teste = ft_strchr(str, '4');

	printf("%s\n", ch);
	printf("%s\n", teste);
	return (1);
	}
