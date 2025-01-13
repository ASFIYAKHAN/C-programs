#include<stdio.h>
int main(){
    int i = 0,sum;
    while(i <= 10){
       printf("%d+",i);
       sum = sum+i;
       i++;
    }
    printf(" = %d",sum);
}