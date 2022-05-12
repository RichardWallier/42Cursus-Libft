/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneves <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 01:42:34 by gneves            #+#    #+#             */
/*   Updated: 2022/05/12 11:52:48 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char		*ret;
	size_t		sz_temp;
	size_t		sz_str;

	ret = (char *)malloc(len);
	sz_temp = 0;
	sz_str = 0;
	while (str[sz_str] != '\0')
	{
		if (sz_str >= start && sz_temp < len)
			ret[sz_temp++] = str[sz_str];
		sz_str++;
	}
	ret[sz_temp] = '\0';
	return (ret);
}
