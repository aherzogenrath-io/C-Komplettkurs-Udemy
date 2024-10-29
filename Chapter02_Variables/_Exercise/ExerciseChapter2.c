#include <stdio.h>
#include <stdint.h>
int main(void)
{
    u_int64_t age_years;
    u_int64_t age_days;
    u_int64_t age_hours;
    u_int64_t age_minutes;
    u_int64_t age_seconds;

    printf("enter your age\n");
    scanf("%llu", &age_years);
    age_days = age_years * 365;
    age_hours = age_days * 24;
    age_minutes = age_hours * 60;
    age_seconds = age_minutes * 60;

    printf("you have lived for %llu days\n", age_days);
    printf("you have lived for %llu hours\n", age_hours);
    printf("you have lived for %llu minutes\n", age_minutes);
    printf("you have lived for %llu seconds\n", age_seconds);


    return 0;
}
