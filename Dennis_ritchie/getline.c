#include <stdio.h>
#define MAX 100

void  getline__(char str[]);
void  getline__(char str[])
{
	char arr[MAX];
	int i = 0;
	while (str[i] != '\n')
	{
		arr[i] = str[i];
		i++;
	}	
	printf("str>>%s", arr);
//	return arr;
}

int main()
{
	char ch;
	char str[MAX], str1[MAX];
	int i = 0;

	while ((ch = getchar()) != EOF)
	{
		str[i] = ch;
		i++;
	}
	str[i] = '\0';
	printf("str_> %s", str);

	printf("Enter the string to search\n");
	scanf("%s", str1);
	getline__(str);
//	printf("arr->%s", arr);
}

