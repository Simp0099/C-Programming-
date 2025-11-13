//fabonnaci series 
#include<stdio.h>
int main()
{
    int n, prevFirst = 0, prevSecond = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; ++i) {
        printf("%d, ", prevFirst);
        nextTerm = prevFirst + prevSecond;
        prevFirst = prevSecond;
        prevSecond = nextTerm;
    }
    return 0;
}