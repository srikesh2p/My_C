#include <stdio.h>

float add(int n1, float n2);

int main()
{
	float result;
        float (*fp)(int, float);
	fp=add;

	/* Invoking function directly using function name */
	result = add(4, 5.5);
	printf("Result:%f\n\r", result);

	/* Invoking function indirectly by dereferencing function pointer */
	result = (*fp)(4, 4.5);
	printf("Result:%f\n\r", result);

}

float add(int n1, float n2)
{
	return n1+n2;
}
