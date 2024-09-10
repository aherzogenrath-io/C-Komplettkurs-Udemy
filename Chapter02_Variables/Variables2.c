#include <stdio.h>

int main(void)
{
    float my_balance = 1000.30F;
    printf("My balance: %f\n", my_balance);

    float money_from_udemy_course = 5.0F;
    float doner_kebab_price = 5.0F;


    // Addition +
    // Subtraktion -
    // Division /
    // Multiplikation *

    my_balance = my_balance + money_from_udemy_course;
    // same as my_balance += money_from_udemy_course;

    printf("My balance: %f\n", my_balance);

    my_balance = my_balance - doner_kebab_price;

    printf("My balance: %f\n", my_balance);

    my_balance = my_balance * 2.0F;

    printf("My balance: %f\n", my_balance);

    my_balance = my_balance / 2;

    printf("My Balanze: %f\n", my_balance);


    return 0;
}
