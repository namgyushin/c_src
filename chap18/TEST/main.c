#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    FILE *afp, *bfp, *cfp;
    char aword[10][20] = {0};
    char bword[10][20] = {0};
    char cword[10][20] = {0};
    char *res;

    //---------------------------------------------------파일 열기
    
    afp = fopen("a.txt", "r");

    if (afp == NULL)
    {
        printf("입력 파일을 열지 못했습니다.\n");
        return 1;
    }

    bfp = fopen("b.txt", "r");

    if (afp == NULL)
    {
        printf("입력 파일을 열지 못했습니다.\n");
        return 1;
    }

        cfp = fopen("c.txt", "w");

    if (cfp == NULL)
    {
        printf("입력 파일을 열지 못했습니다.\n");
        return 1;
    }


    //---------------------------------------------------변수에 저장


    for (int i = 0; i < 10; i++)
    {
        res = fgets(aword[i], sizeof(aword[i]), afp);
        if (res == NULL)
        {
            break;
        }
        // aword[0][strlen(aword[0])-1] = '\0';
        // printf("%s", aword[i]);
    }


    for (int i = 0; i < 10; i++)
    {
        res = fgets(bword[i], sizeof(bword[i]), bfp);
        if (res == NULL)
        {
            break;
        }
        // bword[0][strlen(bword[0])-1] = '\0';
        // printf("%s", bword[i]);
    }
    

    int i, j;
    int temp = 0;
    int cnt = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (strcmp(aword[j], bword[i]) == 0) // 같은게 있으면, 1
            {
                temp = 1;
            }
            if (temp = 0)
            {
                strcpy(cword[cnt], bword[i]); // c 에저장
                cnt++;
            }
            temp = 0;
        }
    }

    //---------------------------------------------------파일 종료

    fclose(afp);
    fclose(bfp);

    return 0;
}
