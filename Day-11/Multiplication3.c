#include<stdio.h>
int Mul(){
    int a=10;
    int b=4;
    int c;
    c = a * b;
    return c;
}
void main(){
    int r = 0;
    r = Mul();
    printf("the Multiplication of two numbers is : %d",r);

}