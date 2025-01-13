#include<stdio.h>
int main(){
    int n,i=1,average,aver;
    while(i<=10){
        printf("enter the numbers : ");
        scanf("%d",&n);
        i++;
        average = average + n;
    }
    aver= average / 10;
    printf("the average is : %d ",aver);
}