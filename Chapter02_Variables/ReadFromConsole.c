#include <stdio.h>

int main(void)
{
    float float_value;
    double double_value;
    int int_value;
    unsigned int uint_value;

    printf("Please enter a float value: ");
    scanf("%f",&float_value);
    printf("float value: %f\n", float_value);

    printf("Please enter a double value: ");
    scanf("%lf", &double_value);
    printf("double value: %lf\n", double_value);

    printf("Please enter a int value: ");
    scanf("%d", &int_value);
    printf("int value: %d\n", int_value);

    printf("Please enter a unsigned int value: ");
    scanf("%u", &uint_value);
    printf("unsigned int value: %u\n", uint_value);
    return 0;
}
