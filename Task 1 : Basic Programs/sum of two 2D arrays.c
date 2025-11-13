//Sum of two 2D arrays
#include <stdio.h>
int main(){
    int r, c, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    
    int arr1[r][c], arr2[r][c], sum[r][c];
    
    printf("Enter elements of first array:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    
    printf("Enter elements of second array:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    
    // Calculating sum of two arrays
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    // Displaying the sum array
    printf("Sum of the two arrays:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
 