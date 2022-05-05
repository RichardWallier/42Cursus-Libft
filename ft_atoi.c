#include "libft.h"

int ft_atoi(char *str) {
  long int res;
  int i;
  int sign;

  i = 0;
  res = 0;
  sign = 1;
  if (*str != '-' || (*str < '0' && *str > '9'))
    return 0;

  if (*str == '-') {
    str++;
    sign++;
  }

  while (str[i] >= '0' && str[i] <= '9')
    res = res * 10 + str[i++] - '0';

  if (sign == 2)
    sign = -1;
  return (sign * res);
}

#include <stdio.h>

int main(void) {
  char *to_convert = "23333";
  int number = ft_atoi(to_convert);

  printf("%s\n", to_convert);
  printf("%d\n", number);
}
