//FInd min and max of an ar
#include <stdio.h>
int main(){
    
    int n;
    printf ("Enter length of array: ");
    scanf ("%d", &n);

    int num[n];
    for(int i=0; i<n; i++){
    printf("Enter element %d: ", i+1);
    scanf("%d", &num[i]);
    }

    
    int min = num[0];
    int max = num[0];
    

    for(int i=1; i<n; i++){
        if(min>num[i]){
            min = num[i];
        }
        if(max<num[i]){
            max = num[i];
        }
    }
    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);
}
