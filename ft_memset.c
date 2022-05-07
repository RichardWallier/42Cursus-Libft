/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 01:50:27 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/07 01:50:29 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, unsigned int offset)
{
	unsigned char	*pointer;

	pointer = dest;
	while (offset-- > 0)
		*pointer++ = c;
	return (dest);
}
