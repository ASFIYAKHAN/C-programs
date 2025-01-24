#include<stdio.h>
int Factorial(int n){
    int fact =n;
    fact = fact * n;
    if( fact > n){
        return 0;   
    }
    Factorial(n - 1); 
}

int main(){
    int number,r;
    printf("enter the number :");
    scanf("%d",&number);
    r =  Factorial(number);
    printf("the factorial of the given number is : %d",r);
}