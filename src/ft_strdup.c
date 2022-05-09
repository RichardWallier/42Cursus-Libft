/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:11:03 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/09 17:11:05 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	void	*new;
	int		len;

	len = ft_strlen(s1);
	new = (char *)malloc(len * sizeof(char *));
	if (new == NULL)
		return (NULL);
	return (ft_memcpy(new, s1, len));
}
