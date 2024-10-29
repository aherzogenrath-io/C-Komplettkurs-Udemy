#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    float sum = 0.0F;
    float user_input;

    while (true)
    {
        scanf("%f", &user_input);

        if (user_input > 10)
        {
            continue;
        }
        if (user_input < 0.0F)
        {
            printf("%f", sum);
            break;
        }
         sum += user_input;
   }
    return 0;
}
