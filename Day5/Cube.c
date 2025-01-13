#include<stdio.h>
int main(){
    int i=0,n,cube;
    printf("enter the number : ");
    scanf("%d",&n);
    while(i <= n){
        cube = i*i*i;
        printf("\n the cube of %d is : %d",i,cube);
        i++;
    }
}