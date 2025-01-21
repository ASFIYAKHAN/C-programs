#include<stdio.h>
#include<math.h>
void ArmstrongNumbers(){
  int sum=0;
  int number = 153;
  int  remainder ,Original_Sum, temp,count=0;
  Original_Sum = number;
  temp = number;
  while(temp != 0){
    temp = temp / 10;
    count++;
  }

  temp = number;
  while(temp != 0){
    remainder = temp % 10;
    sum = sum + round(pow(remainder,count));
    temp = temp / 10;
  }
    

  if(Original_Sum == sum){
    printf("the number is a armstrong number");
  }  
  else{
    printf("the number is not a armstrong number");
  }

}

void main(){
    ArmstrongNumbers();
}