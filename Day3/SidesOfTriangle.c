#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the sides of a triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if((a == b == c) || (a == b | b == c | c == a) ||(a != b != c)){
        printf("the triangle is a valid triangle");
    }
    else{
        printf("the triangle is not a valid triangle");
    }
    return 0;
}