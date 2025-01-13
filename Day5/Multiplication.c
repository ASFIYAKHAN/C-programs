#include<stdio.h>
int main(){
    int i=0,n,mul;
    printf("enter the number : ");
    scanf("%d",&n);
    while(i<=10){
        mul = n * i;
        printf("\n %d * %d = %d",n,i,mul);
        i++;
    }
}