/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:08:42 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/09 17:08:44 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t maxlen)
{
	size_t		srclen;
	size_t		dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dest);
	if (dstlen == maxlen)
		return (maxlen + srclen);
	ft_memcpy(dest + dstlen, src, 13);
	dest[maxlen] = '\0';
	return (srclen + dstlen);
}
