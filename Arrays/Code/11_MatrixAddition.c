#include <stdio.h>

int main(void)
{

	int i,j, row, col;
	printf("Enter the first matrix row and col\n");
	scanf("%d%d", &row, &col);
	int arr[row][col], arr1[row][col];
	for(i=0; i<row; i++)
		for(j=0; j<col; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	printf("Enter the 2nd  matrix row and col\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("Sum of 2 Matrix:\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d", arr[i][j] + arr1[i][j]);
		}
		printf("\n");	
	}
	return 0;


}

