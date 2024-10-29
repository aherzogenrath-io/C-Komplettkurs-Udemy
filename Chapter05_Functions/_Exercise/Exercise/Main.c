#include <stdio.h>

#include "Lib.h"

int main(void)
{
    int a = getNumberFromUser();
    int b = getNumberFromUser();
    printf("Max{%d, %d} = %d\n", a, b, min(a, b));
    printf("Min{%d, %d} = %d\n", a, b, max(a, b));
    printf("Mead{%d, %d} = %f\n", a, b, mean(a, b));

    return 0;
    }
