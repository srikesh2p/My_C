
#include <stdio.h>

int main()
{
	int x = 5,y = 2;
	float result;
//	result = x / y;
//	result = (float)x / y;
	result = x / (float)y;
	printf("%f\n", result);
	
}

