/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:37:02 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/13 13:31:46 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t maxsize)
{
	size_t	index;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	index = 0;
	while ((dest[index] || src[index]) && index < maxsize)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (srcsize);
}
