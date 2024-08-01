#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char **ps);
int main(void)
{
    char temp[80];
    char *str[3];
    int i;

    for ( i = 0; i < 3; i++)
    {
        printf("문자열을 입력하세요 :");
        gets(temp);
        str[i] = (char *)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
    }
    
    print_str(str);     //포인터배열을 매개변수로 사용
    // for ( i = 0; i < 3; i++)
    // {
    //     printf("%s\n", str[i]);
    // }
    
    for ( i = 0; i < 3; i++)
    {
        free(str[i]);
    }
    
    
    return 0;
}

void print_str(char **ps)
{
    while(*ps != NULL)
    {
        printf("%s\n", *ps);
        ps++;
    }
}
