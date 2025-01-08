#include<stdio.h>
int main(){
    int num1,num2,average;
    printf("enter the two numbers :");
    scanf("%d%d",&num1,&num2);
    average = (num1 + num2) / 2;
    printf("the avarage of two numbers is :%d",average);
    return 0;
}