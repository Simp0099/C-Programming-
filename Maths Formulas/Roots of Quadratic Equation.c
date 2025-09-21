// Program to FInd the roots of Quadratic Equation
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter the Coefficients A : ");
    printf("Enter the Coefficients B : ");
    printf("Enter the Coefficients C : ");

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    discriminant = b * b - 4 * a * c;

    // For real and different roots

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\nRoot 2 = %.2f\n", root1, root2);
    }
    // For real and same roots

    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    // For roots that are not real
    else

    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);

        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }
   
}
