#include <stdio.h>

int main()
{
	int y;
	printf("Enter the year\n\r");
	scanf("%d",&y);
	#if 0
	if ( y % 4 != 0)
	printf("Not leap year\n");
	else if(y % 100 != 0)
	printf("Leap year\n");
	else if (y % 400 == 0)
	printf("Leap year\n");
	else
	printf("Not Leap year\n");
	#endif

#if 0	
	if (y % 4 == 0)
		if(y % 100 == 0)
			if (y % 400 == 0)
				printf("Leap year\n");
			else
				printf("Not Leap year\n");
		else
			printf("Leap year\n");
	else
		printf("Not Leap year\n");
#endif

	if ((y %4 == 0 && y % 100 != 0) || (y % 4 == 0 && y % 100 == 0 && y % 400 == 0))
		printf("Leap year\n");
	else
		
		printf("Not Leap year\n");

}
