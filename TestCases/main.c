/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:09:14 by lguedes           #+#    #+#             */
/*   Updated: 2022/05/07 00:09:16 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include <_ctype.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <ctype.h>

// TODO -> Make this file norminette friendly

int ft_test_isalpha(void);
int ft_test_isdigit(void);
int	ft_test_isalnum(void);
int	ft_test_isprint(void);
int ft_test_memset(void);
int ft_test_strlen(void);
int ft_test_bzero(void);

int main(void)
{
	printf("Starting tests:\n");
	ft_test_isalpha();
	ft_test_isdigit();
	ft_test_isalnum();
	ft_test_isprint();
	ft_test_strlen();
	ft_test_memset();
	ft_test_bzero();
}

// Test ft_isalpha
int ft_test_isalpha(void) 
{
	char *str1 = "lk-_=+=':;\\|\\/?,`~!@#$%ajdf93%$#@%()*&73894lkdjsfsd934";
	for (size_t i = 0; i < strlen(str1); i++) {
		if(ft_isalpha(str1[i]) != isalpha(str1[i])) {
			printf("Test Failed on the %zurd char\n", i);
			printf("Recived: %d", ft_isalpha(str1[i]));
			return (0);
		}
	}
	printf("ft_isalpha - OK!\n");
	return (1);
}

// Test ft_isdigit
int ft_test_isdigit(void)
{
	char *str1 = "lk-_=+=':;\\|\\/?,`~!@#$%ajdf93%$#@%()*&73894lkdjsfsd934";
	for (size_t i = 0; i < strlen(str1); i++) {
		if(ft_isdigit(str1[i]) != isdigit(str1[i])) {
			printf("Test Failed on the %zurd char\n", i);
			printf("Recived: %d", ft_isalpha(str1[i]));
			return (0);
		}
	}
	printf("ft_isdigit - OK!\n");
	return (1);
}

// Test ft_isalnum
int	ft_test_isalnum(void)
{
	char *str1 = "lk-_=+=':;\\|\\/?,`~!@#$%ajdf93%$#@%()*&73894lkdjsfsd934";
	for (size_t i = 0; i < strlen(str1); i++) {
		if(ft_isalnum(str1[i]) != isalnum(str1[i])) {
			printf("Test Failed on the %zurd char\n", i);
			printf("Recived: %d", ft_isalnum(str1[i]));
			return (0);
		}
	}
	printf("ft_isalnum - OK!\n");
	return (1);
}

// Test ft_isascii
int	ft_test_isascii(void)
{
	char *str1 = "lk-_=+=':;\\|\\/?,`~!@#$%ajdf93%$#@%()*&73894lkdjsfsd934";
	for (size_t i = 0; i < strlen(str1); i++) {
		if(ft_isascii(str1[i]) != isascii(str1[i])) {
			printf("Test Failed on the %zurd char\n", i);
			printf("Recived: %d", ft_isascii(str1[i]));
			return (0);
		}
	}
	printf("ft_isalnum - OK!\n");
	return (1);
}

// Test ft_isprint
int	ft_test_isprint(void)
{
	char *str1 = "lk-_=+=':;\\|\\/?,`~!@#$%ajdf93%$#@%()*&73894lkdjsfsd934";
	for (size_t i = 0; i < strlen(str1); i++) {
		if(ft_isprint(str1[i]) != isprint(str1[i])) {
			printf("===============================\n");
			printf("Test Failed on the %zurd char\n", i);
			printf("Expected: %d\n", isprint(str1[i]));
			printf("Recived: %d\n", ft_isprint(str1[i]));
			printf("===============================\n");
			return (0);
		}
	}
	printf("ft_isalnum - OK!\n");
	return (1);
}

// Test ft_strlen
int ft_test_strlen(void)
{
	char *str1 = "jaksdhjdkdhdlseieur82373@$#@#%";

	if (ft_strlen(str1) != strlen(str1))
	{
		printf("===============================\n");
		printf("Test fail on strlen function: \n");
		printf("Expected: %zu", strlen(str1));
		printf("Recived: %zu", strlen(str1));
		printf("===============================\n");
		return (0);
	}
	printf("ft_strlen - OK!\n");
	return (1);
}

// Test ft_memset
int ft_test_memset(void)
{
	char str1[] = "jaksdhjdkdhdlseieur82373@$#@#%";
	char str2[] = "jaksdhjdkdhdlseieur82373@$#@#%";

	memset(str1, 97, 8*sizeof(char));
	ft_memset(str2, 97, 8*sizeof(char));

	for(int i = 0; i < (int)strlen(str1); i++)
	{
		if(str1[i] != str2[i])
		{
			printf("===============================\n");
			printf("Test fail on ft_memset function: \n");
			printf("Expected: %s\n", str1);
			printf("Recived: %s\n", str2);
			printf("===============================\n");
			return (0);
		}
	}
	printf("ft_memset - OK!\n");
	return (1);
}

// Test ft_bzero
int ft_test_bzero(void)
{
	char str1[] = "jaksdhjdkdhdlseieur82373@$#@#%";
	char str2[] = "jaksdhjdkdhdlseieur82373@$#@#%";
	
	bzero(str1, strlen(str1));
	ft_bzero(str2, strlen(str2));

	for (int i = 0; i < 30; i++)
	{
		if (str2[i] != str1[i])
		{
			printf("===============================\n");
			printf("Test fail on ft_bzero function: \n");
			printf("Expected: %s\n", str1);
			printf("Recived: %s\n", str2);
			printf("===============================\n");
			return (0);
		}
	}
	printf("ft_bzero - OK!\n");
	return (1);
}

// Test ft_memcpy
int ft_test_memcpy(void)
{
	return (0);
}
