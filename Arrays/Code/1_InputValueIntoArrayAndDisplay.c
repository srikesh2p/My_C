#include <stdio.h>

int main()
{
	int i,j;
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
		printf("%d\t", arr[j]);
	}
	printf("\n");
}
