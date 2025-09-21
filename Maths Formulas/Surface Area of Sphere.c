// Surface Area of Sphere (4 πr^2)
#include <stdio.h>
#include <math.h>

int main() {
    float radius, surface_area;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    surface_area = 4 * 3.14 * radius * radius;

    printf("Surface area of the sphere = %.2f\n", surface_area);

}
