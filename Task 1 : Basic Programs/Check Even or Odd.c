//Program to check if the given number is Even or Odd

#include <stdio.h>
int main()
{
    int number;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    if (number % 2 == 0)
        printf("%d is an Even Number.\n", number);
    else
        printf("%d is an Odd Number.\n", number);
    
}
