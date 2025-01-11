#include<stdio.h>
int main(){
    int num ,sum = 1;
    printf("enter the values : ");
    scanf("%d",&num);
    for(int i = 1 ;i<=num;i++){
        sum =  i * i * i;
        printf("\n the cube of %d is = %d",i,sum);
    }
}