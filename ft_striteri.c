/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:33:51 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/16 14:03:09 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char const *s, void (*f)(unsigned int, char *))
{
	size_t	index;
	size_t	s_size;

	if (!s)
		return ;
	s_size = ft_strlen(s);
	index = 0;
	while (index < s_size)
	{
		(f)(index, (char *)&s[index]);
		index++;
	}
	return ;
}
