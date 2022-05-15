/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:59:05 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/15 20:23:41 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	fullsize;

	if (!s1 || !s2)
		return (NULL);
	fullsize = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	newstr = (char *)malloc(fullsize * sizeof(char));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, ft_strlen(s1) + 1);
	ft_strlcpy(&newstr[ft_strlen(s1)], s2, ft_strlen(s2) + 1);
	return (newstr);
}
