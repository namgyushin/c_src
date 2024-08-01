#include <stdio.h>

int main(void)
{
    char mark[5][5];
    int i, j;

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if( i==j || (i + j)==4 )
            {
                mark[i][j] = 'x';
                
            }
        }
        
    }
    
    return 0;
}
