#include<stdio.h>
 int Sum(int n){
    if(n == 0){
        return 0;
    }
    return n + Sum(n-1);
 }

 int main(){
    int nums,r;
    printf("enter the number you want sum of : ");
    scanf("%d",&nums);
    r = Sum(nums);
    printf("the sum of %d numbers is :%d",nums,r);
 }