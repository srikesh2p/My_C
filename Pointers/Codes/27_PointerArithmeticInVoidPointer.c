#include <stdio.h>

int main()
{
	int i;
	void *vp;
	float a[5]={1.2,2.3,3.4,4.5};
	vp = a;
	for( i=0; i<4; i++)
	{
		printf("%f\n", *((float *)vp+i));
//		(float *)vp = (float *)vp + 1; 
		/* Can't write vp = vp + 1*/ 
	}
}
