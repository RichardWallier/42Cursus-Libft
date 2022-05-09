/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 01:42:34 by gneves            #+#    #+#             */
/*   Updated: 2022/05/09 17:24:20 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*r;
	size_t		sz_temp;
	size_t		sz_s;

	r = (char *)malloc(len);
	sz_temp = 0;
	sz_s = 0;
	while (s[sz_s] != '\0')
	{
		if (sz_s >= start && sz_temp < len)
			r[sz_temp++] = s[sz_s];
		sz_s++;
	}
	r[sz_temp] = '\0';
	return (r);
}
