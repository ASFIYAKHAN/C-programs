#include<stdio.h>
int main(){
    int num;
    printf("enter the negative values");
    scanf("%d",&num);
    for(;num<0;){
        printf("enter negative number");
        scanf("%d",&num);
    }
}