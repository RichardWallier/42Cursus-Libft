/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:34:25 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/07 02:40:28 by vsergio          ###   ########.fr       */
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

int		ft_isascii(char c);

int		ft_isprint(int c);

size_t	ft_strlen(char *str);

void	*ft_memset(void *dest, int c, unsigned int offset);

void	ft_bzero(void *dest, size_t len);

void	*ft_memcpy(void *dest, void *src, size_t len);

int		ft_atoi(char *str);

int		ft_memcmp(void *str1, void *str2, size_t size);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

size_t	ft_strlcpy(char *dest, char *src, size_t destsize);

char	ft_toupper(char c);

char	*ft_strchr(char *str, char c);

char	*ft_strrchr(const char *s, int c);

int		ft_tolower(int arg);

#endif
