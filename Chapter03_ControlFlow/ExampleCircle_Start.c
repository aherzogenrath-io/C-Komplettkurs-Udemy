#include <stdio.h>

#define PI 3.14159f

int main(void)
{
    // Circle Example
    // 1.) Read the values for r from the user,
    //     check if the input is correct (non-negative length)
    // 2.) Compute the perimeter and area of the circle
    // 3.) Print the computed values to the console
    float r = 0.0F;

    printf("Radius of the circle:\n");
    scanf("%f", &r);

    // check if r is a positiv number
    if (r < 0.0F){
        printf("ERROR - invalid radius\n");
        return 1;
    }

    float area = PI * (r * r);
    float perimiter = 2.0F * PI * r;

    printf("\nArea of the circle is: %f\n", area);
    printf("Perimiter of the circle: %f", perimiter);



    return 0;
}
