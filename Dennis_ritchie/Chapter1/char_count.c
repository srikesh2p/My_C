#include <stdio.h>

int main(void)
{
	char ch;
	char count=0;
#if 0
	while((ch = getchar()) != EOF)
		count++;
#endif
	for(count=0; ((ch = getchar()) != EOF); count++);
	printf("count = %d", count);
}

