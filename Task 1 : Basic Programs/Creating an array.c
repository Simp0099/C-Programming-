

#include <stdio.h>
int main() {
    int num[]= {5, 10, 15, 20, 25};
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, num[i]);
    }
    printf("Length of array = %d\n", sizeof(num)/sizeof(num[0]));
    printf("Size of array = %d\n", sizeof(num));

    return 0;
}
/* Length of array = 5
   Size of array = 20 */