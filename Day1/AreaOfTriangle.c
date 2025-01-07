#include<stdio.h>
int main(){
    int b,h,a;
    printf("enter the base and height of a triangle :");
    scanf("%d %d",&b,&h);
    a = 0.5 * b * h;
    printf("the area of triangle is :%d",a);
    return 0;
}