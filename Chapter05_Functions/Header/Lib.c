#include <stdio.h>

int getNumberFromUser(void)
{
    int number_from_user;

    printf("Please enter an integer number: ");
    scanf("%d", &number_from_user);

    return number_from_user;
}
