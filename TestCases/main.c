/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:09:14 by lguedes           #+#    #+#             */
/*   Updated: 2022/05/12 09:58:38 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

//Test ft_atoi
void	ft_test_atoi(void)
{
	printf("ft: %i |", ft_atoi("1234"));
	printf("original: %i \n", atoi("1234"));
	printf("ft: %i |", ft_atoi("  -1231389989234"));
	printf("original: %i \n", atoi("  -1231389989234"));
	printf("ft: %i |", ft_atoi("  ++1231389989234"));
	printf("original: %i \n", atoi("  ++1231389989234"));
	printf("ft: %i |", ft_atoi("  +-1231389989234"));
	printf("original: %i \n", atoi("  +-1231389989234"));
	printf("ft: %i |", ft_atoi("  +-+1231389989234"));
	printf("original: %i \n", atoi("  +-+1231389989234"));
}

// Test ft_bzero
void	ft_test_bzero(void)
{
	char	ft[] = "Welcome Coder!";
	char	original[] = "Welcome Coder!";

	ft_bzero(ft, 5);
	write(1, "ft: ", 4);
	for (int index = 0; index < 14; index++)
		write(1, &ft[index], 1);
	write(1, " | ", 3);
	write(1, "original: ", 10);
	bzero(original, 5);
	for (int index = 0; index < 14; index++)
		write(1, &original[index], 1);
	write(1, "\n", 1);
}

// Test ft_isalpha
void ft_test_isalpha(void) 
{
	printf("ft: %i |", ft_isalpha('a'));
	printf("original: %i\n", isalpha('a'));
	printf("ft: %i |", ft_isalpha('@'));
	printf("original: %i\n", isalpha('@'));
}

// Test ft_isascii

// Test ft_isdigit
void ft_test_isdigit(void) 
{
	printf("ft: %i |", ft_isdigit('1'));
	printf("original: %i\n", isdigit('1'));
	printf("ft: %i |", ft_isdigit('a'));
	printf("original: %i\n", isdigit('@'));
}

// Test isalnum
void ft_test_isalnum(void)
{
	printf("ft: %i |", ft_isalnum('a'));
	printf("original: %i\n", isalnum('a'));
	printf("ft: %i |", ft_isalnum('1'));
	printf("original: %i\n", isalnum('1'));
	printf("ft: %i |", ft_isalnum('@'));
	printf("original: %i\n", isalnum('@'));
}

void ft_test_isascii(void)
{
	printf("ft: %i |", ft_isalpha(98));
	printf("original: %i\n", isalpha(98));
	printf("ft: %i |", ft_isalpha(129));
	printf("original: %i\n", isalpha(129));
}

// Test isprint
void ft_test_isprint(void)
{
	printf("ft: %i |", ft_isprint('\0'));
	printf("original: %i\n", isprint('\0'));
	printf("ft: %i |", ft_isprint('a'));
	printf("original: %i\n", isprint('a'));
}

// Test strlen
void	ft_test_strlen(void)
{
	char *str = "Welcome Coder!";
	printf("ft: %zu | ", ft_strlen(str));
	printf("original: %zu \n", strlen(str));
}

// Test memset
void ft_test_memset(void)
{
	char ftstr[] = "Welcome Coder!";
	char originalstr[] = "Welcome Coder!";
	ft_memset(ftstr,'@', 5);
	printf("ft: %s | ", ftstr);
	memset(originalstr,'@', 5);
	printf("original: %s \n", originalstr);
}

// Test memcpy
void	ft_test_memcpy(void)
{
	char	*ftsrc = "Welcome Coder";
	char	ftdest[15];
	char	*originalsrc = "Welcome Coder";
	char	originaldest[15];

	ft_memcpy(ftdest, ftsrc, ft_strlen(ftsrc));
	printf("ft: %s | ", ftdest);
	memcpy(originaldest, originalsrc, ft_strlen(originalsrc));
	printf("original: %s \n", originaldest);
}

// Test memmove
void	ft_test_memmove(void)
{
	char	*ftsrc = "Welcome Coder";
	char	ftdest[15];
	char	*originalsrc = "Welcome Coder";
	char	originaldest[15];

	ft_memmove(ftdest, ftsrc, ft_strlen(ftsrc));
	printf("ft: %s | ", ftdest);
	memmove(originaldest, originalsrc, ft_strlen(originalsrc));
	printf("original: %s \n", originaldest);
}

// Test strlcpy
void	ft_test_strlcpy(void)
{
	char	*ftsrc = "Welcome Coder";
	char	ftdest[15];

	ft_strlcpy(ftdest, ftsrc, 14);
	printf("ft: %s size: %zu | ", ftdest, ft_strlcpy(ftdest, ftsrc, 14));
	printf("original: %s size: %zu\n", ftsrc, strlen(ftsrc));
}

// Test strlcat
void	ft_test_strlcat(void)
{
    char dest[20] = "Welcome ";
    char str[] = "Coder";
    size_t rvalue;

    rvalue = ft_strlcat(dest, str, 10);
    printf("ft: dest = %s, ftsizeret: %zu | original: Welcome C, sizereturn: 13\n", dest, rvalue);
}

// Test toupper
void	ft_test_toupper(void)
{
	char	ft = 'a';
	char	original = 'a';
	printf("ft: %c | original: %c\n", ft_toupper(ft), toupper(original));
}

// Test tolower
void	ft_test_tolower(void)
{
	char	ft = 'A';
	char	original = 'A';
	printf("ft: %c | original: %c\n", ft_tolower(ft), tolower(original));
}

void	ft_test_strchr(void)
{
	char *str = "Welcome Coder";
	char to_find = 'C';
	printf("ft: %s | original: %s\n", ft_strchr(str, to_find), strchr(str, to_find));
}


void	ft_test_strncmp(void)
{
	char *str1 = "Welcome Coder!b";
	char *str2 = "Welcome Coder!a";

	printf("ft: %i | original: %i\n", ft_strncmp(str1, str2, 14), strncmp(str1, str2, 14));
}

void	ft_test_memchr(void)
{
	char *str1 = "Welcome Coder!b";
	char *str2 = "Welcome Coder!a";

	printf("ft: %i | original: %i\n", ft_memcmp(str1, str2, 15), memcmp(str1, str2, 15));
}


void	ft_test_memcmp(void)
{
	char *str1 = "Welcome Coder!b";
	char *str2 = "Welcome Coder!a";

	printf("ft: %i | original: %i\n", ft_memcmp(str1, str2, 15), memcmp(str1, str2, 15));
}

int main(void)
{
	printf("Starting tests:\n");

	printf("ISALPHA:\n");
	ft_test_isalpha();

	ft_test_isdigit();
	printf("ISDIGIT:\n");
	printf("ISALNUM:\n");
	ft_test_isalnum();

	printf("ISASCII:\n");
	ft_test_isascii();

	printf("ISPRINT:\n");
	ft_test_isprint();

	printf("STRLEN:\n");
	ft_test_strlen();

	printf("MEMSET:\n");
	ft_test_memset();

	printf("BZERO:\n");
	ft_test_bzero();

	printf("MEMCPY:\n");
	ft_test_memcpy();

	printf("MEMMOVE:\n");
	ft_test_memmove();

	printf("STRLCPY:\n");
	ft_test_strlcpy();

	printf("STRLCAT:\n");
	ft_test_strlcat();

	printf("TOUPPER:\n");
	ft_test_toupper();

	printf("TOLOWER:\n");
	ft_test_tolower();

	printf("STRCHR:\n");
	ft_test_strchr();

	printf("STRNCMP:\n");
	ft_test_strncmp();

	printf("MEMCHR:\n");
	ft_test_memchr();

	printf("MEMCMP:\n");
	ft_test_memcmp();

	printf("STRNSTR:\n");
	// ft_test_strnstr();

	printf("ATOI:\n");
	ft_test_atoi();

	printf("CALLOC:\n");
	// ft_test_calloc();

	printf("STRDUP:\n");
	// ft_test_strdup();
}
// Test ft_isalnum

// Test ft_isascii

// Test ft_isprint

// Test ft_strlen

// Test ft_memset

// Test ft_bzero

// Test ft_memcpy
