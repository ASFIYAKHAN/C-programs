#include<stdio.h>
int main(){
    int num,sum = 0,average;
    for(int i = 0; i<=10;i++){
        printf("enter the number : ");
        scanf("%d",&i);
           if(i<=10){
            sum = sum + i;
           }
    }
    printf("\n  the sum is %d",sum);
    average = sum / 10;
    printf("\n  the average is %d",average);
}