/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:29:30 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/03 12:15:12 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include <ctype.h>
#include <stdio.h>
int main(void)
{
	int number;
	char letter;

	number = 10;
	letter = 'A';

	printf("Resultado funcao criada: %d\n", ft_isalpha(letter));
	printf("Resultado funcao original: %d", isalpha(number));
}
