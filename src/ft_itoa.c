/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:30:09 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/12 19:30:41 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*character;
	char	*ret;

	ret = malloc(10);
	character = "\0";
	if (n < 10)
	{
		character = ft_atoi(n + 48);
		ft_strjoin(ret, character);
		return (ret);
	}
	else
		ft_itoa(n / 10);
	ft_itoa(n % 10);
	return (ret);
}
