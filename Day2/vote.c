#include<stdio.h>
int main(){
    int age;
    printf("enter the age :");
    scanf("%d",&age);
    if(age<18){
        printf("you are not eligible to vote");
    }
    else if(age>50){
        printf("you are too old to vote");
    }
    else{
        printf("you can vote");
    }
}