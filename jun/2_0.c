
#include <stdio.h>

int func(int x, int y);

int main(void)
{
    int a, b, c;

    printf("곱할 두 정수를 쓰시오.");
    scanf("%d%d", &a, &b);
    printf("두번째 입력한 정수의 몇번째 자리숫자를 알고 싶은가요?");
    scanf("%d", &c);

    printf("%d\n", func(b, c));      // 1 의자리


    return 0;
}

int func(int x, int y)
{
    return (x / y) % 10;
}