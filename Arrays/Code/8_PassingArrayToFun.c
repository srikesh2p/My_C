#include <stdio.h>

int main()
{
	int arr[3] = {5,6,7}, i;
	func(arr);
	for(i=0;i<3;i++)
	printf("%d\n", arr[i]);
}

func(int val[])
{
	val[0] = 7;
	val[1] = 8;
	val[2] = 9;
}

