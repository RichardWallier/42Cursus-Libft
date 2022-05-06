/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:50:47 by lguedes           #+#    #+#             */
/*   Updated: 2022/02/16 21:14:25 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str) {
  long int res;
  int i;
  int sign;

  i = 0;
  res = 0;
  sign = 1;
  while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r' ||
         *str == '\v' || *str == '\f')
    str++;
  if (*str == '-'){
    sign = -1;
		str++;
	}
  if (*str == '+'){
    sign++;
		str++;
	}
  while (str[i] >= '0' && str[i] <= '9')
    res = res * 10 + str[i++] - '0';
  return (sign * res);
}

#include <stdio.h>
int main(void) {
  char *test = "233432";

  printf("%d", ft_atoi(test));
}
