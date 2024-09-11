#include <stdio.h>

int main(void)
{
    // Rectangle Example
    // 1.) Read the values for a, b from the user
    // 2.) Compute the perimeter and area of the rectangle
    // 3.) Print the computed values to the console

    float side_a;
    float side_b;
    float area;
    float perimiter;

    printf("Enter side a: ");
    scanf("%f", &side_a);

    printf("\nEnter side b: ");
    scanf("%f", &side_b);


    area = side_a * side_b;
    perimiter = (2.0F * side_a) + (2.0F * side_b);

    printf("\nThe area of the rectangle: %f\n", area);
    printf("\nThe perimiter of the rectangle: %f\n", perimiter);


    return 0;
}
