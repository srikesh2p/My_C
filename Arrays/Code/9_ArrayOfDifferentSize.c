#include <stdio.h>

int func(int val[], int num);
int main()
{
	int arr[3] = {0,1,2};
	int arr2[5]= {3,4,5,6,7};
	int arr3[6]= {8,9,1,2,3,4};
	func(arr,3);
	func(arr2,5);
	func(arr3,6);
}

int func(int val[], int num)
{
	int i;
	for(i=0; i < num; i++)
		printf("%d\n", val[i]);
	printf("\n");
}
