/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:28:42 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/13 13:27:42 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t maxlen)
{
	size_t	dsize;
	size_t	ssize;

	if (maxlen <= ft_strlen(dest))
		return (maxlen + ft_strlen(src));
	dsize = ft_strlen(dest);
	ssize = 0;
	while (src[ssize] && dsize < maxlen - 1)
		dest[dsize++] = src[ssize++];
	dest[dsize] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[ssize]));
}
