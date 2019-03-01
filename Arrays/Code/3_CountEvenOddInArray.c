#include <stdio.h>

int main(void)
{
	int i, j, e=0, o=0;
	printf("Enter the number of element\n");
	scanf("%d", &i);
	int arr[i];
	printf("Enter the element\n");
	for(j=0; j<i; j++)
	{
		scanf("%d", &arr[j]);
	}
	for(j=0; j<i; j++)
	{
		if(arr[j] % 2)
			o++;
		else
			e++;
	}
	printf("Number of even number in array is %d\n", e);
	printf("Number of odd number in array is %d\n", o);
	return 0;

}
