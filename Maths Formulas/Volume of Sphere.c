// Volume of Sphere (4/3 πr^3)
#include <stdio.h>
#include <math.h>

int main() {
    
    float radius, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    volume = 1.33 * (3.14 * radius *radius * radius);

    printf("Volume of the sphere = %.2f\n", volume);

    return 0;
}
