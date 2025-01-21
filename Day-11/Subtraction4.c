#include<stdio.h>
int Subs(int a , int b){
    int c;
    c = a - b;
    return c;
}
void main(){
    int a = 10;
    int b = 20;
    int r = 0;
    r = Subs(a,b);
    printf("the substraction of two numbers is : %d",r);
}