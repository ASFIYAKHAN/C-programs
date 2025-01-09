#include<stdio.h>
int main(){
    int a;
    printf("enter the numnber :");
    scanf("%d",&a);
    if(a > 0){
        printf("%d is a positive number",a);
    }
    else if (a == 0){
        printf("%d is neither positive nor negative number",a);
    }
    else{
        printf("%d is negative number",a);
    }
    return 0;
}