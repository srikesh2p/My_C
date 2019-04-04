#include <stdio.h>

int main()
{
	int c;
	while (c = getchar() != EOF)
	{
		printf("c=%d", c);
	}
	printf("c=%d is", c);
}

