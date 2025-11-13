//Sum of odd Numbers and even numbers   
#include <stdio.h>
int main() {    
    int n, sumofodd = 0,sumofeven=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2) {
        if(i % 2 != 0){
            sumofeven += i;
        }   
        else{
            sumofodd += i;
        }
        
    }
    printf("Sum of odd numbers from 1 to %d is: %d\n", n, sumofodd);
    printf("Sum of even numbers from 1 to %d is: %d\n", n, sumofeven);
    return 0;
}