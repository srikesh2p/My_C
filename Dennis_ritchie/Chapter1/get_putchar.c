#include <stdio.h>

int main()
{
	char ch;
	while ((ch = getchar()) != '\n')
	//while ((ch = getchar()) != EOF)
//	while (ch = getchar() != EOF)
	putchar(ch);
}
