#include<stdio.h>
int factorial(){
    int n = 5;
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

return sum;
}
void main(){
    int r;
    r = factorial();
    printf("the sum of factorials of numbers are : %d",r);
}