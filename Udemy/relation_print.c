#include <stdio.h>

int main()
{
	printf("%d\n", printf("hello") == printf("hello"));
	printf("%d\n", printf("Angel") != printf("Daemon"));
	return 0;
}
