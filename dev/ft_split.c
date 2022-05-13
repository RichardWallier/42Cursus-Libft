/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:18:09 by rwallier          #+#    #+#             */
/*   Updated: 2022/05/13 19:01:33 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	set_rows(char *temp, char c)
{
	int	index;
	int	rows;

	index = ft_strlen(temp) - 1;
	rows = 0;
	while (temp[index])
	{
		while (temp[index] == c || index == 0)
		{
			if (temp[index - 1] == c)
				index--;
			else
				rows++;
			index--;
		}
		index--;
	}
	return (rows + 1);
}

void	set_ret(char **ret, char *temp, char c, int rows)
{
	int	index;

	index = ft_strlen(temp) - 1;
	rows = 6;
	while (temp[index])
	{
		if (temp[index] == c || index == 0)
		{
			if (temp[index - 1] == c)
				index--;
			if (index == 0)
			{
				ret[rows] = ft_strdup(&temp[index]);
				ft_bzero(&temp[index--], ft_strlen(ret[rows]));
				rows--;
			}
			else
			{
				ret[rows] = ft_strdup(&temp[index + 1]);
				ft_bzero(&temp[index--], ft_strlen(ret[rows]));
				rows--;
			}
		}
		index--;
	}
}

char	**trim_all_strings(char **ret, char c)
{
	int	index;

	index = 0;
	while (ret[index])
	{
		ret[index] = ft_strtrim(ret[index], &c);
		index++;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	char	*temp;
	int		rows;
	int		cols;
	int		index;

	rows = set_rows((char *)s, c);
	ret = (char **)malloc(rows * sizeof(char *));
	index = 0;
	while (index < rows)
	{
		if (!ret[index])
		{
			
		}
	}
	if(!ret)
	temp = ft_strdup((char *)s);
	index = ft_strlen(s) - 1;
	set_ret(ret, temp, c, rows);
	ret = trim_all_strings(ret, c);
	free(temp);
	free(ret);
	return (ret);
}
