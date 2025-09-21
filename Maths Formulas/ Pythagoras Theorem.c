// Program to find the length of the hypotenuse of a right triangle using Pythagorean theorem

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Enter the length of the base (a): ");
    scanf("%f", &a);

    printf("Enter the length of the height (b): ");
    scanf("%f", &b);

    // Pythagorean theorem: c^2 = a^2 + b^2
    c = sqrt(a * a + b * b);

    printf("The length of the hypotenuse (c) is: %.2f\n", c);

}