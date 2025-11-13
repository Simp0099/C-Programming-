//Linear Sort in C
#include <stdio.h>
int main(){
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //Finding min and max
    int min = arr[0];
    int max = arr[0];
    for(i=1; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }


    int range = max - min + 1;
    int count[range];
    for(i=0; i<range; i++){
        count[i] = 0;
    }

    for(i=0; i<n; i++){
        count[arr[i] - min]++;
    }

    int index = 0;
    for(i=0; i<range; i++){
        while(count[i] > 0){
            arr[index++] = i + min;
            count[i]--;
        }
    }

    printf("Sorted array in ascending order:\n");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}