/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:22:02 by lguedes           #+#    #+#             */
/*   Updated: 2022/05/12 23:22:03 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

static size_t count_splits(char *s, char c);
static size_t sub_len(char *str, char sep);

char **ft_split(char const *s, char c)
{
	char *s_buff;
	char **final;
	int offset;
	int splits;
	int sub;

	s_buff = (char *)s;
	splits = count_splits(s_buff, c); 

	// Alocate memory for each subtring char * and define it's limit
	// printf("%d", splits);
	final = malloc(sizeof(char *) * (splits + 1));
	final[splits] = NULL;

	//Make space for each char inside final[i]
	offset = 0;
	while(offset < splits)
	{
		while(*s_buff && *s_buff == c)
			s_buff++;
		sub =  (int)sub_len(s_buff, c);
		final[offset++] = ft_substr(s_buff, 0, sub);
		s_buff += sub;
	}
	return(final);
}

static size_t count_splits(char *s, char c)
{
	size_t sublen;
	size_t splitnum;
	char *s_buff;

	s_buff = s;
	splitnum = 0;
	while(*s_buff++)
	{
		while(*s_buff && *s_buff == c)
			s_buff++;
		sublen = sub_len(s_buff, c);
		s_buff += sublen;
		if(sublen)
			splitnum++;
	}
	return (splitnum);
}


static size_t sub_len(char *str, char sep)
{
	size_t len;
	
	len = 0;
	while(*str && *str != sep)
	{
		str++;
		len++;
	}
	return (len);
}

int main(void)
{
	char *str = "     Split    kidbengala please    ldskfjasklfjsadkl     ";
	char sep = ' ';
	char **res;
	int i = 0;
	res = ft_split(str, sep);
	
	// printf("Opa");
	while(res[i])
		printf("%s\n", res[i++]);
}
