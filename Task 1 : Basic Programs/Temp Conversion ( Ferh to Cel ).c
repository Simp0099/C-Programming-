// Temprature Conversion From Ferhnitnie TO Celsius
#include <stdio.h>
int main()
{
    float celsius, ferhnitnie;

    printf("Enter the temprature in Ferhnitnie: ");
    scanf("%f", &ferhnitnie);

    celsius = (ferhnitnie - 32) * 5/9;

    printf("The Temprature in Celsius for the Ferhnitnie %f",ferhnitnie);
    printf(" is : %f\n\n", celsius);
}
