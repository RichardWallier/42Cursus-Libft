/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 02:14:29 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/07 02:17:16 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	sz_temp;

	sz_temp = ft_strlen((char *)s);
	while (sz_temp >= 0)
	{
		if (s[sz_temp] == c)
			return ((char *)&s[sz_temp]);
		sz_temp--;
	}
	return (0);
}
