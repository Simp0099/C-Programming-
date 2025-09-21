// Temprature Conversion From Celsius TO ferhnitnie
#include <stdio.h>
int main()
{
    float celsius, ferhnitnie;

    printf("Enter the temprature in Celsius: ");
    scanf("%f", &celsius);

    ferhnitnie = (celsius * 9/5) + 32;

    printf("The Temprature in Ferhnitnie for the Celsius %f",celsius);
    printf(" is : %f\n\n", ferhnitnie);

}
