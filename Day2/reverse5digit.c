#include<stdio.h>
int main(){
    int num , num2,d,l ,d2,l2 ,d3,l3, d4,l4 , d5 , l5,rev ;
    printf("enter the five digit number :");
    scanf("%d",&num);
    d = num % 10;
    l = num / 10;
    d2 = l % 10 ;
    l2 = l / 10;
    d3 = l2 % 10;
    l3 = l2 / 10;
    d4 = l3 % 10;
    l4 = l3 / 10;
    d5 = l4 % 10;
    l5 = l4 / 10;
    rev = d * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5 * 1;
    printf("the swapped number is :%d",rev);
    return 0;


}