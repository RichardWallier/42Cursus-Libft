/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:10:29 by lguedes           #+#    #+#             */
/*   Updated: 2022/05/13 15:03:45 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t offset;
	size_t n_offset;
	size_t index_to_return;
	
	offset = 0;
	if (*needle == '\0')
		return ((char *)haystack);

	while (haystack[offset++] && offset <= len)
	{
		n_offset = 0;
		if(haystack[offset] == needle[n_offset])
		{
			index_to_return = offset;
			while(haystack[offset++] == needle[n_offset++] && offset <= len)
			{
				if(n_offset == ft_strlen(needle))
					return ((char *)&haystack[index_to_return]);
			}
		}
	}
	return (NULL);
}
