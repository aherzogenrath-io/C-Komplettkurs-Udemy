#include <stdio.h>

#ifndef LIB_H
#define LIB_H

int getNumberFromUser(void);
int min(int, int);
int max(int, int);
float mean(int, int);

#endif

int getNumberFromUser(void)
{
    int a;
    printf("Enter number:\n");
    scanf("%d", &a);
    return a;
}

int min(int a, int b)
{
    if (a > b)
    {
        return b;
    } else if (a < b)
    {
        return a;
    }
    else
    {
        printf("Numbers are equal\n");
        return a;
    }
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    } else if (a < b)
    {
        return b;
    }
    else
    {
        printf("Numbers are equal\n");
        return a;
    }
}

float mean(int a, int b)
{
    return (a + b) / 2.0f;
}
