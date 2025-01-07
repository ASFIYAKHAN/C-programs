#include<stdio.h>
int main(){
    int l,b,p;
    printf("enter the length and breadth of a rectangle :");
    scanf("%d %d",&l,&b);
    p = 2*(l+b);
    printf("the perimeter of the rectangle is : %d",p);
}