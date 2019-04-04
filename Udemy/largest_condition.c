#include <stdio.h>

int main()
{
	int m, a, b, c;
	printf("Enter 3 number\n\r");
	scanf ("%d %d %d", &a, &b, &c);

	m = (a > b && a > c) ? a : ((b > c)?b:c);

	printf("Largest is %d\n", m);

}
