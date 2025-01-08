#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks :");
    scanf("%d",&marks);
    if(marks>=80 & marks<100){
        printf("you belong to A grade");
    }
    else if(marks>40 & marks<80){
        printf("you belong to B grade"); 
    }
    else if(marks>35 & marks<40) {
        printf("you belong to c grade");
    }
    else{
        printf("you failed");
    }
}