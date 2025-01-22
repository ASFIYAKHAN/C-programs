#include<stdio.h>
void factorial(int n){
    int fact = 1;
    int sum = 0;
    int divide;

 for(int j = 1;j<=n;j++){
     printf("for int j = %d\n",j);
       for(int i= j ;i <= j; i++){
          fact = fact*i;
          printf("%d\n",fact);
          divide = fact / i;
   }
    sum = sum + divide;
}

printf("the sum of factorial number is : %d",sum);
}
void main(){
    int a = 5;
    factorial(a);
}