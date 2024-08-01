#include <stdio.h>

union student
{
    int i;
    short sh;
    char ch;

};
int main(void)
{
    union student num = {0x12345678};
    {
        printf(" i : %d\n", num.i);
        printf(" i : %d\n", num.sh);
        printf(" i : %d\n", num.ch);


    };
    

    return 0;
}
