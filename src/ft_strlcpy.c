/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:37:02 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/15 16:39:38 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t maxsize)
{
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (srcsize + 1 < maxsize)
		ft_memcpy(dest, src, srcsize + 1);
	else if (maxsize != 0)
	{
		ft_memcpy(dest, src, maxsize - 1);
		dest[maxsize - 1] = '\0';
	}
	return (srcsize);
}
