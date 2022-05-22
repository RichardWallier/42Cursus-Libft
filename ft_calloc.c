/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:25:05 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/18 18:33:34 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*ptr;
	size_t		delete;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	delete = count * size;
	ft_bzero(ptr, delete);
	return (ptr);
}
