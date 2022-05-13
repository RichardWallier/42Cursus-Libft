/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:59:05 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/13 13:48:35 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	fullsize;

	fullsize = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc(fullsize * sizeof(char));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, ft_strlen(s1));
	ft_strlcat(newstr, s2, fullsize + 1);
	return (newstr);
}
