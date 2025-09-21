// Finding the Area of triangle using Heron's Formula
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, s, area;

    printf("Enter the length of the Side 'A' of Triangle: ");
    scanf("%f", &a);
    
    printf("Enter the length of the Side 'B' of Triangle: ");
    scanf("%f", &b);

    printf("Enter the length of the Side 'C' of Triangle: ");
    scanf("%f", &c);
    
    // For Semi Perimaeter  
    s = (a + b + c) / 2;
    
    //Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("The Area of the Triangle is: %.2f\n", area);
    
}