#include <stdio.h>

int main()
{
	int a = 5, b = 6, i;
	// i = a++ * b++;
	// i = a++ * ++b;
	 i = ++a * ++b;
	printf("i=%d a =%d b=%d", i, a, b);
}
