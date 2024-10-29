#include <stdio.h>

int divisibleBy2(int number);
int divisibleBy3(int number);
void printDivisibility(int number);
int getNumberFromUser(void);

int main(void)
{
    printDivisibility(getNumberFromUser());

    return 0;
}

int divisibleBy2(int number)
{
    return number % 2 == 0;
}

int divisibleBy3(int number)
{
    return number % 3 == 0;
}


void printDivisibility(int number)
{
    if (divisibleBy2(number))
    {
        printf("%d is divisible by 2!\n", number);
        return;
    }
    if(divisibleBy3(number))
    {
        printf("%d is divisible by 3!\n", number);
        return;
    }
    printf("%d none!\n", number);
}

int getNumberFromUser(void)
{
    int number;
    printf("Input integer Number:\n");
    scanf("%d", &number);
    return number;
}
