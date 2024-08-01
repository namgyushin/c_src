#include <stdio.h>

int main(void)
{
    int a;
    int b;
    printf("숫자를 입력하시오.");
    scanf("%d", &a);

    for (int i = 2; i < (a+1); i++)
    {
        for (int j = 2; j < (i+1); j++)
        {
            if (i == j)
            {
                printf("%5d", i);
                b++;
                if (b % 5 == 0)
                {
                    printf("\n");
                }
                
            }
            else if ((i % j)==0)
            {
                break;
            }
        }
        
    }
    

    return 0;
}
