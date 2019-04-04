#include<stdio.h>

int main(void)
{
	char ch, line = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
		line++;
	}
	printf("line count: %d\n", line);
}
