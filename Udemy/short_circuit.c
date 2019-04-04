#include <stdio.h>

int main()
{
	int res, a = -2, b =10;
//	res = ++a && ++b;
	res = ++a || ++b;
	printf("res:%d a:%d b:%d", res,a,b);
}
