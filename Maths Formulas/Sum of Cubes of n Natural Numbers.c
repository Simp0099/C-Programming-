// Sum of Cubes of n Natural Numbers (Beginner version, no long long or pow)

#include <stdio.h>

int main() {
    int n;
    int sum_of_cubes = 0;

    // Ask user for input
    printf("Enter a natural number n: ");
    scanf("%d", &n);

    sum_of_cubes = (int)(n * (n + 1)) / 2;
    sum_of_cubes = sum_of_cubes * sum_of_cubes;


    printf("The sum of cubes of first %d natural numbers is: %d\n", n, sum_of_cubes);

    return 0;
}