#include <stdio.h>

int main()
{
 int num, i=0,j;
 printf("Enter 10 numbers between 1 & 50\n");
 while(i < 5)
 {
   scanf("%d", &num);
   if (num >= 1 && num <= 50 )
   {
     for(j = 0; j < num; j++)
     printf("=");
     printf("\n");
     i++;
   }
 }
}
