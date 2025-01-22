#include<stdio.h>
int primenumber(){
    int a=10;
   
   if((a % 2==0) || (a % 3 ==0)){
    return 1;
   }
   else if(a == 1){
    return 0;
   }
   else{
    return -1;
   }


}
void main(){
    int r;
   r = primenumber();
    if(r == 1){
        printf("the number is not a  prime ");
    }
    else if(r == 0){
        printf("the number is nor prime nor composite ");
    }
    else{
        printf("the number is prime number");
    }
}