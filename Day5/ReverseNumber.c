#include<stdio.h>
int main(){
    int n,rev;
    printf("enter the number : ");
    scanf("%d",&n);
    while(n>0){
        rev = n % 10;
        printf("%d",rev);
        n = n / 10;
    }
}