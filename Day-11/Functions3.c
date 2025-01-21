#include<stdio.h>
int add(){
     int a ;
     int b ;
     int c;
     printf("enter the numbers");
     scanf("%d%d",&a,&b);
     c = a + b;
     return c;


}
void main(){
    int r = 0;
    r = add();
    printf("the addition of two numbers is :%d ",r);
}