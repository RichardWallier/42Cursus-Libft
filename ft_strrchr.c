/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:01:10 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/15 18:55:00 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ret;
	int		strsize;

	strsize = (int)ft_strlen(str);
	ret = (char *)str + strsize;
	while (strsize-- >= 0)
	{
		if (*ret == (char)c)
			return (ret);
		ret--;
	}
	return (NULL);
}
