#include<stdio.h>
int Mul(int a , int b){
    int c;
    c = a * b;
    return c;
}
void main(){
    int a = 10;
    int b = 20;
    int r = 0;
    r = Mul(a,b);
    printf("the Multiplication of two numbers is : %d",r);
}