#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int c;
    c = *ptr1 + *ptr2;
    printf("the addition of two numbers is :%d",c);
}