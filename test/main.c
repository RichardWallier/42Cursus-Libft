/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:10:27 by lguedes           #+#    #+#             */
/*   Updated: 2022/05/05 11:42:43 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char *to_convert = " lasds lkdsjfadklsjf\n -2333";
  int number;

  number = atoi(to_convert);
  printf("%d\n", number);
  return 0;
}
