#include<stdio.h>
int main(){
    int sellP,CostP,profit,loss;
    printf("enter the selling price : ");
    scanf("%d",&sellP);
    printf("enter the cost price : ");
    scanf("%d",&CostP);
    profit = sellP - CostP;
    loss = CostP - sellP;
    if( profit > loss ){
        printf("%d is the profit",profit);
    }
    else{
        printf("%d is the loss",loss);
    }

}