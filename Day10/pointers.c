#include<stdio.h>
int main(){
    int a = 10;
    int *ptr1= &a;
    printf("\n the value of the a is :%d",ptr1);
    printf("\n the value of the a is :%p",&a);
    printf("\n the value of the a is :%d",a);
    printf("\n the value of the a is :%p",*ptr1);
}