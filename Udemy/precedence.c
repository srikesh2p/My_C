#include <stdio.h>

int main()
{
	int a = 5, b = 7;
	int res;
	res = !(a > b);
	printf("res:%d\n", res); 
	res = !a > b;
	printf("res:%d\n", res); 

}

