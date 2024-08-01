#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
    char *title;
    char author[20];
    int page;
    int price;
};

void print_book(struct book a);

int main(void)
{
    char temp[100];
    struct book s1;

    printf("제목을 입력하세요 :");
    gets(temp);

    s1.title = (char *)malloc(strlen(temp)+1);
    strcpy(s1.title, "혼자 공부하는 C언어");
    strcpy(s1.author, "서현우");
    s1.page = 664;
    s1.price = 26000;

    print_book(s1);

    // printf("도서명 : %s\n", s1.title);
    // printf("저자 : %s\n", s1.author);
    // printf("페이지수 : %d쪽\n", s1.page);
    // printf("가격 : %d원\n", s1.price);

    return 0;
}

void print_book(struct book a)
{
    printf("도서명 : %s\n", a.title);
    printf("저자 : %s\n", a.author);
    printf("페이지수 : %d쪽\n", a.page);
    printf("가격 : %d원\n", a.price);

}
