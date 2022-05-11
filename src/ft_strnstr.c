/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:10:29 by lguedes           #+#    #+#             */
/*   Updated: 2022/05/11 14:10:30 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int offset;
	int n_offset;
	size_t index_to_return;

	offset = 0;

	while (haystack[offset++] && offset < (int)len)
	{
		n_offset = 0;
		if(haystack[offset] == needle[n_offset])
		{
			index_to_return = offset;
			while(haystack[offset++] == needle[n_offset++])
			{
				if(n_offset == (int)strlen(needle))
					return ((char *)&haystack[index_to_return]);
			}
		}
	}
	return (NULL);
}

int main(void)
{
	char *str = "pato pata palerma pat pal pet pity pitty palerma anerma";
	char *needle = "palerma";
	printf("%s\n", ft_strnstr(str,  needle, strlen(str)));
}


