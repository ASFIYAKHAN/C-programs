#include<stdio.h>
void Subs(int a,int b){
    int c;
    c = a * b;
    printf("the multiplication of two numbers is : %d",c);
}
void main(){
    int a;
    int b;
    Subs(10,4);
}