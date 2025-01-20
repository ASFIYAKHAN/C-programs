#include <stdio.h>
int main() {
    int a = 5;         
    int *ptr = &a;     
    int fact = 1;     
    int *ptr2 = &fact; 
 
    for (int i = 1; i <= *ptr; i++) { 
        *ptr2 = *ptr2 * i;            
    }

    printf("The factorial of the number %d is: %d\n", *ptr, *ptr2);

    return 0;
}
