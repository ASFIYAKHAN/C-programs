#include<stdio.h>
int factorial(int n){
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
    int a = 5;
    int r;
    r = factorial(a);
    printf("the sum of factorial number are : %d",r);

}