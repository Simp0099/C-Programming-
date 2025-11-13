//Linear sort 
#include<stdio.h>
int main(){
    int n , i , s, f=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(arr[i]==s){
            f=1;
            break;
        }
    }
    if(f==1){
        printf("Element found at position %d\n",i+1);
    }
    else{
        printf("Element not found\n");
    }   
}
    