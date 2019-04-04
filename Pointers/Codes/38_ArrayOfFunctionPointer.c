#include <stdio.h>

float sum(int a, float b);
float sub(int a, float b);
float mul(int a, float b);
float div(int a, float b);
int main()
{
	int a = 12, i;
	float b = 6;
	float (*fptr[])(int , float)={sum, sub, mul, div};
	for(i=0; i<4; i++)
	printf("%f\n", (*fptr[i])(a,b));
}

float sum(int a, float b)
{
	return(a + b);
}

float sub(int a, float b)
{
	return(a - b);
}

float mul(int a, float b)
{
	return(a * b);
}

float div(int a, float b)
{
	return(a / b);
}
