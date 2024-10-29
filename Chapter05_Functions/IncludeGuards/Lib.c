#include <stdio.h>

#ifndef LIB_H
#define LIB_H

int getNumberFromUser(void);

#endif

int getNumberFromUser(void)
{
    int number_from_user;

    printf("Please enter an integer number: ");
    scanf("%d", &number_from_user);

    return number_from_user;
}
