#include<stdio.h>
int main(){
   int num , sum = 0;
   printf("enter the number : ");
   scanf("%d",&num);
   for(int i = 0;i<=num;i++){
     if(i % 2 == 0){
        printf("\n %d",i);
         sum = sum + i;
     }
   }
   printf("\n sum = %d",sum);
}