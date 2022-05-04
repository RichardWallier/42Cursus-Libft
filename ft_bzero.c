/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:32:36 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/04 12:49:14 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//#include <strings.h>

#include "libft.h"

void	ft_bzero(void *dest, unsigned int len)
{
	unsigned char	*ptr;

	ptr = dest;
	while (len-- > 0)
		*ptr++ = '0';
}

/*int main () {
   char str[] = "paralelepipedo\n";
    printf("%s", str);


	ft_bzero(str, 5);
	printf("%s", str);

	bzero(str, 5);
	printf("%s", str);
}*/
