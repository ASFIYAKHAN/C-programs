#include<stdio.h>
int main(){
    int i = 1, count = 0, n;
    printf("Enter the number of odd natural numbers to print: ");
    scanf("%d", &n);
    
    while(i <= n){
        printf("%d\n", i); 
        i = i + 2;
    }
}
