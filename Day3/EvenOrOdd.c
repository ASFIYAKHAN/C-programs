#include<stdio.h>
int main(){
    int a;
    printf("enter the number to check whether it is even or odd");
    scanf("%d",&a);
    if(a % 2 == 0){
        printf("%d is even number",a);
    }
    else if(a==0 | a==1){
        printf("%d is neither odd or even it is composite prime number",a);
    }
    else{
        printf("%d is odd number",a);
    }
    return 0;
}