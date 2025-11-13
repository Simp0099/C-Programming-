// WAP to find the second largest number in an array
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first, second;
    first = second = -2147483648; // Initialize to minimum integer value

    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second == -2147483648) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is %d\n", second);
    }

    return 0;
}