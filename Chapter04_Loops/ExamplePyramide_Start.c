#include <stdio.h>

int main(void)
{
    // 1
    // 11
    // 111
    // 1111
    // 11111
    // 11111
    // 1111
    // 111
    // 11
    // 1
    int height = 2;

    for (int a = height; a > 0; a--)
    {
        for(int b = height; b >= a; b--)
        {
            printf("1");
        }
        printf("\n");
    }
    for (int a = height; a > 0; a--)
    {
        for (int b = 0; b < a; b++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
