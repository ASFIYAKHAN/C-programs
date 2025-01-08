#include<stdio.h>
int main(){
   int a,b,c,temp;
    printf("\n enter the first number :");
   scanf("%d",&a);
    printf("\n enter the first number :");
   scanf("%d",&b);
    printf("\n enter the first number :");
   scanf("%d",&c); 
   printf("the number is :%d%d%d",a,b,c);
   temp = a;
   a = c;
   c = temp;
   printf("\n the swapped numbers are : %d%d%d",a,b,c);
}