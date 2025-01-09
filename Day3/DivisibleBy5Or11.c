#include<stdio.h>
int main(){
    int a;
    printf("enter the number to check whether it is divisible by 5 or 11 :");
    scanf("%d",&a);
    if(a % 5 ==0 & a % 11 ==0 ){
        printf(" %d is divisible by 5 and 11 also ",a);
    }
    else if(a % 11 ==0){
        printf("%d is divisible by 11 ",a);
    }
    else if( a % 5 == 0){
        printf("%d is divisible by 5 ",a);
    }
    else{
        printf("%d is neither divisible by 5 or 11",a);
    }
    return 0; 
}