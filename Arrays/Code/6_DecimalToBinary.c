#include <stdio.h>

int main(void)
{
	int num, i =0, k;
	printf("Enter the number\n");
	scanf("%d", &num);
	int arr[num];
	k = num;
	while(num)
	{
		num = num % 2;
		arr[i]= num;
		num = num / 2;
		i++;
	}
	printf("Binary value of the decimal %d ", num);
	for(i = 0; i < k; i++ )
		printf("%d\n", arr[i]);
	printf("\n");
	return 0;
}
