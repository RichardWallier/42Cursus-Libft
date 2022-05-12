/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:34:25 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/12 10:39:52 by rwallier         ###   ########.fr       */
/*   Updated: 2022/05/04 14:33:16 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int a);

int		ft_isdigit(int a);

int		ft_isalnum(int a);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(char *str);

void	*ft_memset(void *dest, int c, unsigned int offset);

void	ft_bzero(void *dest, size_t len);

void	*ft_memcpy(void *dest, void *src, size_t len);

int		ft_atoi(char *str);

char	*ft_strdup(char *s1);

char	ft_toupper(char c);

size_t	ft_strlcat(char *dest, char *src, size_t maxlen);

int		ft_memcmp(void *str1, void *str2, size_t size);

size_t	ft_strlcpy(char *dest, char *src, size_t destsize);

int		ft_tolower(int arg);

char	*ft_strchr(const char *s, int c);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

void	*ft_memmove(void *dest, void *src, size_t len);

char *ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif
