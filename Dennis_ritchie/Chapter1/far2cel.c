#include <stdio.h>

int main()
{
	float far, cel;
	int low=0, high=300, step=20;
//	printf("Enter farhenite tem\n");
//	scanf("%d", &far);
	far=low;
	while(high >= far)
	{
//	cel = 5 * ((far - 32))/9;
//	cel = 5/9 * ((far - 32));    // integer division truncates: any fractional part is discarded. Since 5 and 9 are integers. 5/9 would be                                           truncated to zero
//	cel = 5.0/9.0 * ((far - 32));//A decimal point in a constant indicates that it is floating point, however, so 5.0/9.0 is not truncated
                                     // because it is the ratio of two floating-point values.
        cel = 5/9.0 * ((far - 32));
	printf("%3.1f \t%.2f\n", far, cel); // If an arithmetic operator has integer operands, an integer operation is performed. If an arithmetic operator has one floating-point operand and one integer operand, however, the integer will be converted to floating point before the operation is done.
	far = far + step;
	}

}
