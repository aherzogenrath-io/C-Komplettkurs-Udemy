#include <stdio.h>
#include <stdint.h>
int main(void)
{
    u_int64_t age_years;
    u_int64_t age_days;
    u_int64_t age_hours;
    u_int64_t age_minutes;
    u_int64_t age_seconds;


    printf("Please enter your age in years: ");
    scanf("%llu", &age_years);
    age_days = age_years * 365ul;
    age_hours = age_days * 24ul;
    age_minutes = age_hours * 60ul;
    age_seconds = age_minutes * 60ul;



    printf("You are living since: %llu days", age_days);
    printf("\nYou are living since: %llu hours", age_hours);
    printf("\nYou are living since: %llu minutes", age_minutes);
    printf("\nYou are living since: %llu seconds", age_seconds);


    return 0;
}
