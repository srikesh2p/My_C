#include <stdio.h>

int main()
{
	int i, j, sum=0;
	printf("Enter number of element\n");
	scanf("%d", &i);
	int arr[i];
	printf("Enter the elements\n");
	for(j=0; j<i; j++)
	{
		scanf("%d", &arr[j]);
	}

	printf("Entered elements:\n");
	for(j=0; j<i; j++)
	{
		sum+=arr[j];
	}
	printf("Sum of array is %d\n", sum);
}
