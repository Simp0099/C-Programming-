//Binary search in c
#include <stdio.h> 
int main() 
{ 
    int n, i, s, first, last, middle; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
    int arr[n]; 
    printf("Enter %d integers in sorted order:\n", n); 
    for(i=0; i<n; i++) 
    { 
        scanf("%d", &arr[i]); 
    } 
    printf("Enter the element to be searched: "); 
    scanf("%d", &s); 
    first = 0; 
    last = n - 1; 
    middle = (first + last) / 2; 
    while (first <= last) 
    { 
        if (arr[middle] < s) 
            first = middle + 1;     
        else if (arr[middle] == s) 
        { 
            printf("Element found at position %d\n", middle + 1); 
            break; 
        } 
        else
            last = middle - 1; 
        middle = (first + last) / 2; 
    } 
    if (first > last) 
        printf("Element not found\n"); 
    return 0; 
}
