#include <stdio.h>

int main(void)
{

    int a;
    int remainder;
    printf("Please enter a valid unsigned Integer:\n");
    scanf("%d", &a);
    remainder = a % 3;

    if (remainder == 0)
    {
        printf("The number you entered is div. by 3\n");
    }
    else
    {
        remainder = a % 3;
        printf("The number you entered isn't div. by 3\n");
        printf("The remainder of the operation is: %d\n", remainder);
    }


    return 0;
}
