#include <stdio.h>

int main(void)
{
	int i, j, l,s;
	printf("Enter the number of element\n");
	scanf("%d", &i);
	int arr[i];
	printf("Enter the element\n");
	for(j=0; j<i; j++)
	{
		scanf("%d", &arr[j]);
	}
//	l=arr[0];
//	s=arr[0];
	l=s=arr[0];
	for(j=1; j<i; j++)
	{
		if(arr[j] > l)
			l=arr[j];
		if(arr[j] < s)
			s=arr[j];

	}
	printf("Largest Number is %d\n", l);
	printf("Smallest Number is %d\n", s);
	return 0;
}
