//To Find the Circumference of the Circle

#include <stdio.h>
int main()
{

    float radius, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * 3.14159 * radius;

    printf("The circumference of the circle for the Radius %f",radius);
    printf(" is : %f\n\n", circumference);

}
