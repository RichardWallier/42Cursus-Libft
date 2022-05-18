/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:11:06 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/16 14:05:01 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_size;

	needle_size = ft_strlen(needle);
	if (!needle_size)
		return ((char *)haystack);
	while (*haystack && needle_size <= len--)
	{
		if (!ft_memcmp(haystack, needle, needle_size))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
