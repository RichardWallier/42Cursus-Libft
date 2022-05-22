/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:09:21 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/13 13:19:43 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t offset)
{
	unsigned char	*pointer;

	pointer = dest;
	while (offset-- > 0)
		*pointer++ = c;
	return (dest);
}
