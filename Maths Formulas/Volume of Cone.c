// Volume of Cone (1/3 πr^2h)
#include <stdio.h>
#include <math.h>

int main() {
    float radius, height, volume;

    printf("Enter the radius of the cone: ");
    scanf("%f", &radius);

    printf("Enter the height of the cone: ");
    scanf("%f", &height);

    volume = (1.0/3.0) * 3.14 * radius * radius * height;

    printf("Volume of the cone = %.2f\n", volume);

}
