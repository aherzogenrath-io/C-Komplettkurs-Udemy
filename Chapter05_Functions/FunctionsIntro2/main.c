#include <stdio.h>

void printEvenOrOdd(int number)
{
    if (number % 2 == 0)
    {
        printf("%d is even!\n", number);
    }
    else
    {
        printf("%d is odd!\n", number);
    }
}

int getNumberFromUser(void)
{
    int number;
    printf("Input integer Number:\n");
    scanf("%d", &number);
    return number;
}

int main(void)
{
    printEvenOrOdd(getNumberFromUser());

    return 0;
}
