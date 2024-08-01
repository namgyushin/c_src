#include <stdio.h>

struct student
{
    char name[20];
    int num;
    int kor;
    int eng;
    int math;
    int tot;
    double avg;
    char grade;
};
 
void print_student(struct student *s);
void input_info(struct student *s);
void sort_avg(struct student *s);

int main(void)
{
    struct student s[5];
    struct student max;

    input_info(s);
    printf("# 정렬 전 데이터...\n");
    print_student(s);

    sort_avg(s);
    // struct student temp;
    // for (int i = 0; i < (sizeof(s) / sizeof(s[0])) - 1; i++)
    // {
    //     for (int j = i + 1; j < (sizeof(s) / sizeof(s[0])); j++)
    //     {
    //         if (s[i].avg > s[j].avg)
    //         {
    //             temp = s[i];
    //             s[i] = s[j];
    //             s[j] = temp;
    //         }
    //     }
    // }

    printf("# 정렬 후 데이터...\n");
    print_student(s);


    return 0;
}

void print_student(struct student *s)
{
    for (int j = 0; j < 5; j++)
    {
        printf("%d %s %4d %4d %4d %5d %6.1lf %4c\n", s[j].num, s[j].name, s[j].kor, s[j].eng, s[j].math, s[j].tot, s[j].avg, s[j].grade);
    }
}

void input_info(struct student *s)
{
    for (int i = 0; i < 5; i++)
    {
        printf("학번 : ");
        scanf("%d", &s[i].num);
        printf("이름 : ");
        scanf(" %s", s[i].name);
        printf("국어, 영어, 수학 점수 : ");
        scanf("%d%d%d", &s[i].kor, &s[i].eng, &s[i].math);
        s[i].tot = s[i].kor + s[i].eng + s[i].math;
        s[i].avg = s[i].tot / 3;
        // if (s[i].avg <)
        // {
        //     /* code */
        // }
        
    }

}

void sort_avg(struct student *s)
{
    struct student temp;
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (s[i].avg > s[j].avg)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
