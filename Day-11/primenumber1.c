#include<stdio.h>
void primenumber(){
    int a=4;
   
   if((a % 2==0) || (a % 3 ==0)){
    printf("the number is not a prime number");
   }
   else if(a == 1){
    printf("the number is nor prime nor composite");
   }
   else{
    printf("the number is prime number");
   }
}
void main(){
    primenumber();
}