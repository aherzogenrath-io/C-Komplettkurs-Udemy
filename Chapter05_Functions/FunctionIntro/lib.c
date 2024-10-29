#include <stdio.h>

#ifndef LIB_H
#define LIB_H

int printEvenOrOdd(int);

#endif

int printEvenOrOdd(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    } else
    {
        return 0;
    }
}
