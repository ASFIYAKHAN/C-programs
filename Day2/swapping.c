#include<stdio.h>
int main(){
    int a , b, temp;
    printf("enter the value for a & b :");
    scanf("%d %d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("the swapped values are : %d %d",a,b);
    return 0;
} 