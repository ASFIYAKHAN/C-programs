#include<stdio.h>
int main(){
    int i=1,n,sum;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=n){
        printf("\t%d",i);
        sum = sum + i;
        i++;
    }
    printf("= %d",sum);
}