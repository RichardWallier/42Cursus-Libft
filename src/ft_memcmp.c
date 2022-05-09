/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 22:16:18 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/06 22:16:21 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *str1, void *str2, size_t size)
{
	char	*s1;
	char	*s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	while (size-- > 0)
	{
		if (*s1++ != *s2++)
			return (s1[-1] - s2[-1]);
	}
	return (0);
}
