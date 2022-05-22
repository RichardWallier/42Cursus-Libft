/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:33:51 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/17 10:47:56 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			index;
	size_t			s_size;
	unsigned char	*result;

	if (!s)
		return (NULL);
	s_size = ft_strlen(s);
	index = 0;
	result = (unsigned char *)malloc(s_size * sizeof(char) + 1);
	if (!result)
		return (NULL);
	while (index < s_size)
	{
		result[index] = (f)(index, s[index]);
		index++;
	}
	result[index] = '\0';
	return ((char *)result);
}
