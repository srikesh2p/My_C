#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len, i;
    printf("Enter string\n\r");
    scanf("%s", str);
    len = strlen(str);
    
    for(i = 0; i < len; i++)
    {
        if(str[i] >= 'a')
        {
            str[i] = str[i] - 32;
        }
        else
        {
            str[i] = str[i] + 32;
        }
    }
    printf("%s", str);
    return 0;
}
