/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 20:37:02 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/07 01:53:31 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t destsize)
{
	int		index;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	while ((dest[index] || src[index]) && index < destsize - 1)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (srcsize);
}
