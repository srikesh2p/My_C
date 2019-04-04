#include <stdio.h>

func()
{
	printf("Hello\n\r");
}
int main()
{
	printf("Address of main: %p\n", main);
	printf("Address of func: %p\n", func);
}
