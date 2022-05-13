/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:20:23 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/13 13:22:03 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str1;
	int i_start;
	int i_end;
	int i;

	i_end = ft_strlen(s1) - 1;
	i_start = 0;
	i = 0;

	while(s1[i] != '\0' && ft_strchr(set, s1[i_start]))
	{
		i_start++;
	}

	while (s1[i_end] > i_start && ft_strchr(set, s1[i_end]))
	{
		i_end--;
	}
	str1 = (ft_substr(s1, i_start, i_end - i_start + 1));
	return (str1);
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "abc ola mundo abc";
	char const set[] = "ola ";
	char	*substr;
	substr = ft_strtrim(s1, set);
	printf("%s", substr);
}*/

