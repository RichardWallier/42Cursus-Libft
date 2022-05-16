/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 08:04:54 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/16 08:12:43 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t length)
{
	unsigned char	*ret;

	ret = (unsigned char *)src;
	while (length-- > 0)
	{
		if (*ret == (unsigned char)c)
			return ((void *)ret);
		ret++;
	}
	return (NULL);
}
