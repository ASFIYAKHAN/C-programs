#include<stdio.h>
int main(){
    int n,fact;
    printf("enter the number : ");
    scanf("%d",&n);
    fact = n;
    for(int i = 1;i<n;i++){
       fact = fact * i;
       printf("\n %d * %d = %d ",fact , i,fact);
    }
    printf("\n the factorial of the given number %d is %d",n,fact);
}