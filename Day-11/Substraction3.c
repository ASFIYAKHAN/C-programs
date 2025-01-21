#include<stdio.h>
int Subs(){
    int a=10;
    int b=4;
    int c;
    c = a - b;
    return c;
}
void main(){
    int r = 0;
    r = Subs();
    printf("the substraction of two numbers is : %d",r);

}