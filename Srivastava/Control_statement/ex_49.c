#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, i, flag = 0;
	printf("Enter number");
	scanf("%d", &num);

        if (num == 1)
        exit(1);
	for (i = 2; i < num/2; i++)
	{
		if(!(num % i))
		{
			printf("Number not prime\n");
			flag = 1;
			break;
		}
	}
	if (!flag)
	{
		printf("Number is prime\n");
	}
}
