#include<stdio.h>
int main(){
    int p,r,t,s;
    printf("enter the values of p r t :");
    scanf("%d %d %d",&p ,&t, &r);
    s = (p * r * t)/100;
    printf("the simple interest is :%d",s);
    return 0;
}