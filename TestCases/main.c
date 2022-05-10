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

int main(void)
{
	printf("Starting tests:\n");
	ft_test_isalpha();
	ft_test_isdigit();
	ft_test_isalnum();
	ft_test_isprint();
	
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
		if(333 != isprint(str1[i])) {
			printf("===============================\n");
			printf("Test Failed on the %zurd char\n", i);
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
		printf("Expected: %zu", strlen(str1));
		return (0);
		printf("===============================\n");
	}
	printf("ft_strlen - OK!\n");
	return (1);
}

// Test ft_memset
int ft_test_memset(void)
{
	char *str1 = "jaksdhjdkdhdlseieur82373@$#@#%";
	char *dest;
	char *dest2;
	
	dest = (char *)malloc(strlen(str1));
	dest2 = (char *)malloc(strlen(str1));
	
	if (ft_memcpy(st))

	return (1);
}

// Test ft_bzero


// Test ft_memcpy
