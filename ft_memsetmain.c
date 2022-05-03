#include <stdio.h>
#include <string.h>
#include "libft.h"

int main () {
   char str[50];
   char str2[50];

   strcpy(str,"This is string.h library function\n");
   puts(str);

   strcpy(str2,"This my library function\n");
   puts(str2);

   memset(str,'$',7);
   puts(str);

   ft_memset(str2,'$',7);
   puts(str2);
   return(0);
}
