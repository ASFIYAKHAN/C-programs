#include<stdio.h>
int main(){
    int marks[5];
    for(int i=0;i<5;i++){
        printf("\n enter the element for position %d : ",i);
        scanf("%d",&marks[i]);
    }
    for(int j=0;j<5;j++){
        printf("\n the %d element of the array are : %d",j,marks[j]);
    }
}