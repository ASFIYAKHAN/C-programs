#include<stdio.h>
int main(){
    float num1, num2, num3,num4, num5 , num6;
    printf("enter the two floating numbers");
    scanf("%f %f",&num1 ,&num2);
    num3=num1 + num2;
    num4=num1 - num2;
    num5=num1 * num2;
    num6=num1 / num2;
    printf("\n the addition of two floating numbers is : %f",num3);
     printf("\n the substraction of two floating numbers is : %f",num4);
      printf("\n the multiplication of two floating numbers is : %f",num5);
       printf("\n the division of two floating numbers is : %f",num6);
       return 0;
}