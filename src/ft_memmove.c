/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 09:45:26 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/11 11:13:51 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	dest = dst;

	const char	*sorc;
	sorc = src;

	if (dest < sorc)
	{
		while (len-- > 0)
		{
			*dest++ = *sorc++;	
		}
	}
	else
	{
		char	*lastd;
		const char	*lasts;
		lastd = dest + (len-1);
		lasts = sorc + (len-1);
			while (len-- > 0)
				*lastd-- = *lasts--;
	}
	return (dst);
}
