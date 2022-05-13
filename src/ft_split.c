/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:18:09 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/13 14:41:25 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		rows;
	int		cols;
	int		index;

	rows = 5;
	cols = 50;
	ret = (char **)malloc(rows * sizeof(char *));
	while (index < rows)
		ret[index++] = (char *)malloc(cols * sizeof(char));

	index = ft_strlen(s) - 1;
	rows = 0;
	while (s[index])
	{
		if (s[index] == c)
			ft_strlcat(ret[rows++], &s[index], ft_strlen(&s[index]));
		index--;
	}
	return (ret);
}

int main (void)
{
	char *s = "Welcome@Coder@from@42";
	char **ret;

	ret = ft_split(s, '@');
	for (int row = 0; ret[row]; row++)
		ft_putstr_fd(ret[row], 1);
	return (0);
}
