/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:34:25 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/13 13:48:11 by rwallier         ###   ########.fr       */
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

size_t	ft_strlen(const char *str);

void	*ft_memset(void *dest, int c, size_t offset);

void	ft_bzero(void *dest, size_t len);

void	*ft_memcpy(void *dest, const void *src, size_t len);

int		ft_atoi(const char *str);

char	*ft_strdup(char *s1);

int		ft_toupper(int arg);

size_t	ft_strlcat(char *dest, const char *src, size_t maxlen);

int		ft_memcmp(const void *str1, const void *str2, size_t size);

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);

int		ft_tolower(int arg);

char	*ft_strchr(const char *s, int c);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

void	*ft_calloc(size_t count, size_t size);

char	*ft_substr(char const *str, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_itoa(int n);

void	ft_putnbr_fd(int n, int fd);

void	ft_putendl_fd(char *s, int fd);

#endif
