/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:42:59 by lguedes           #+#    #+#             */
/*   Updated: 2022/05/06 22:13:20 by gneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>


char *ft_strdup(char *s1)
{
	void *new;
	int len;

	len = ft_strlen(s1);
	new = (char*)malloc(len * sizeof(char*));
	if(new == NULL)
		return (NULL);
	return (ft_memcpy(new, s1, len));
}
