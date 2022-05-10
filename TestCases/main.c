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

int main(void)
{
	printf("Starting tests:\n");
	ft_test_isalpha();
	ft_test_isdigit();
	ft_test_isalnum();
	
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
			printf("Expected: %zu", isascii());
			printf("Recived: %d", ft_isascii(str1[i]));
			return (0);
		}
	}
	printf("ft_isalnum - OK!\n");
	return (1);
}

// Test ft_isprint

// Test ft_strlen

// Test ft_memset

// Test ft_bzero

// Test ft_memcpy
