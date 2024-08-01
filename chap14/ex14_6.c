#include <stdio.h>

int main(void)
{
    char *pray[5];
    int i;

    pray[0] = "dog";
    pray[1] = "elephant";
    pray[2] = "horse";
    pray[3] = "tiger";
    pray[4] = "lion";

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", pray[i]);
    }

    return 0;
}
