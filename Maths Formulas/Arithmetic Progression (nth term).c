//  nth term of Arithmetic Progression (AP)
#include <stdio.h>

int main() {
    int a, d, n, nth_term;

    printf("Enter the first term (a): ");
    scanf("%d", &a);

    printf("Enter the common difference (d): ");
    scanf("%d", &d);

    printf("Enter the term number (n): ");
    scanf("%d", &n);

    nth_term = a + (n - 1) * d;
    printf("The %dth term of the AP is: %d\n", n, nth_term);
}
