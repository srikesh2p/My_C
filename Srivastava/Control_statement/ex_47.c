#include <stdio.h>

int main()
{
  int i, count, num;
  i = 0;
  count = 0;
  printf("Enter ten number\n");
  while(i < 10)
  {
    scanf("%d", &num);
    if (num > count)
    {
       count = num;
    }
  i++;
  }
  printf("%d", count);
}
