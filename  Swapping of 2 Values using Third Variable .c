// Swapping the values of 2 Variables using 3rd Variable
#include <stdio.h>
int main()
{
    int Variable_1,Variable_2, Variable_3;
    printf ("Enter the Value for Variable 1 :");
    scanf("%d", &Variable_1);
    
    printf ("Enter the Value for Variable 2 :");
    scanf("%d", &Variable_2);

    Variable_3 = Variable_1;
    Variable_1 = Variable_2;
    Variable_2 = Variable_3;

    printf("After Swapping :%d,%d  ",Variable_1,Variable_2);
}
