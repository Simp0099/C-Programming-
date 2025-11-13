//to print reverse of number
#include <stdio.h>
int main() {
    int num, remainder , sum, reverse = 0;
    printf("Enter the series : ");
    scanf("%d", &num);
    while (num != 0) {
        remainder=num%10;
        sum = sum+remainder;
        reverse = reverse * 10 + remainder;
        num/=10;}
    printf("The reverse of the number : %d", reverse);
    printf("\nThe sum of the digits : %d", sum);
}