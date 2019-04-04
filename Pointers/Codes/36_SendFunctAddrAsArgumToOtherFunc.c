/* Program to send a function address as argument to other function*/

#include <stdio.h>

void fun(float f, int i);
void func(void (*f1)(float, int), int x);

int main()
{
	func(fun, 2);
}

void func(void (*fp)(float, int), int x)
{
	printf("x:%d\n\r", x);
	(*fp)(8.5, 2);
}

void fun(float f, int i)
{
	printf("function fun called\n");
	printf("f:%f\n", f);
	printf("i:%d\n", i);
}
