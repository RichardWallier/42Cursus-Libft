/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:35:28 by lguedes           #+#    #+#             */
/*   Updated: 2022/05/12 19:29:24 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	char	*d;
	char	*s;
	char	*d_end;
	char	*s_end;

		d = dest;
		s = src;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d_end = d + (len - 1);
		s_end = s + (len - 1);
		while (len--)
			*d_end-- = *s_end--;
	}
	return (dest);
}
