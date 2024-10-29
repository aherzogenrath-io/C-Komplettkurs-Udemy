#include <stdio.h>
#include "lib.h"



int main(void)
{
    int a;
    printf("Enter integer Number:\n");
    scanf("%d", &a);

    if (printEvenOrOdd(a) == 1) {
        printf("%d is an even number\n", a);
    } else{
        printf("%d is an odd number\n", a);
    }


    return 0;
}
