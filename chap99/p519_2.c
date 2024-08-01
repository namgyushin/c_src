#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cracker
{
    int price;
    int calories;
};


int main(void)
{
    struct cracker s1;

    char str[100] = "바사삭의 가격과 열량을 입력하세요.";
    puts(str);
    scanf("%d%d", &s1.price, &s1.calories);
    printf("바사삭의 가격 : %d\n", s1.price);
    printf("바사삭의 열량 : %d\n", s1.calories);
   
    //s1.price = ;
    //s1.calories = 

    return 0;
}
