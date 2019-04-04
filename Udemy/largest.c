#include <stdio.h>

int main()
{
	int m, a, b, c;
	printf("Enter 3 number\n\r");
	scanf ("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
	m = a;
	else if (b > c)
	m = b;
	else
	m = c;

	printf("Largest is %d\n", m);

}
