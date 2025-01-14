#include<stdio.h>
int main(){
    int n, rev = 0, num, digit;
    printf("Enter the number: ");
    scanf("%d", &n);

    num = n; 

    while(n > 0){
        digit = n % 10;  
        rev = rev * 10 + digit; 
        n = n / 10; 
    }
    printf("the reversed number is :%d ",rev);

    if(num == rev){
        printf("\nThe number is a palindrome");
    } else {
        printf("\nThe number is not a palindrome");
    }

    return 0;
}
