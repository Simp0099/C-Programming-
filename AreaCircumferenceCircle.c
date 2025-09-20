//To Find the Circumference & Area of the Circle

#include <stdio.h>
int main()
{

    float radius, circumference, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * 3.14159 * radius;
    area = 3.14159 * radius * radius;

    printf("The circumference of the circle for the Radius %f",radius);
    printf(" is : %f\n\n", circumference);
    printf("The area of the circle for the Radius %f",radius);
    printf(" is : %f\n", area);   
}