
#include <stdio.h>

int main()
{
   int i;
   i = 1;
   while (i <= 80)
   {
      printf("%d\t", i);
      if (i % 8 == 0)
      {
         printf("\n");
      }
   i++;
   }
}

