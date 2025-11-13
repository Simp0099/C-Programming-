//Sum of elements of an array by user input
//Sum of elements of an array by user input
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    long long sum = 0;
    int *arr;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    arr = malloc(n * sizeof *arr);
    if (!arr) {
        perror("malloc");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            free(arr);
            return 1;
        }
        sum += arr[i];
    }

    printf("Sum of array elements = %lld\n", sum);
    free(arr);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    long long sum = 0;
    int *arr;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    arr = malloc(n * sizeof *arr);
    if (!arr) {
        perror("malloc");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            free(arr);
            return 1;
        }
        sum += arr[i];
    }

    printf("Sum of array elements = %lld\n", sum);
    free(arr);
    return 0;
}