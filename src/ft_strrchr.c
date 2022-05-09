/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:01:10 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/09 17:22:31 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	sz_temp;

	sz_temp = ft_strlen((char *)s);
	while (sz_temp > 0)
	{
		if (s[sz_temp] == c)
			return ((char *)&s[sz_temp]);
		sz_temp--;
	}
	return (0);
}
