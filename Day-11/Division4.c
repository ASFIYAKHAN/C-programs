#include<stdio.h>
int Div(int a , int b){
    int c;
    c = a / b;
    return c;
}
void main(){
    int a = 20;
    int b = 10;
    int r = 0;
    r = Div(a,b);
    printf("the Division of two numbers is : %d",r);
}