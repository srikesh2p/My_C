#include <stdio.h>

int main()
{
	void *vp;
	int x=5;
	float y= 6.5;
	float *z = &y;
	vp = &x;
	printf("Value of x is %d\n", *(int *)vp);
	*(int *)vp = 12;
	printf("Value of x is %d\n", *(int *)vp);
	vp = z;
	printf("Value of y is %f\n", *(float *)vp);


}
