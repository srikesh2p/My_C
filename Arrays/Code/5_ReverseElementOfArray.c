#include <stdio.h>

int main()
{
	int i, j, k, t;
	printf("Enter the number of element\n");
	scanf("%d", &i);
	int arr[i];
	printf("Enter the element\n");
	for(j=0; j<i; j++)
	{
		scanf("%d", &arr[j]);
	}
	k=i-1;
	t=0;
	for(j=0; j<i/2; j++,k--)
	{
		t = arr[j];
		arr[j]=arr[k];
		arr[k] = t;

	}
	for(j=0; j<i; j++)
	{
		printf("%d\n", arr[j]);
	}

}
