#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the sides of the triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if( a == b == c){
        printf("the triangle is equiletral triangle");
    }
    else if (a == b | b == c | c == a){
        printf("the triangle is isoceles triangle ");
    }
    else{
        printf("the triangle is a scalene triangle");
    }
    return 0;
}