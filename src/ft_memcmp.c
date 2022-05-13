/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 22:16:18 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/13 13:49:04 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	const char	*s1;
	const char	*s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	while (size-- > 0)
	{
		if (*s1++ != *s2++)
			return (s1[-1] - s2[-1]);
	}
	return (0);
}
