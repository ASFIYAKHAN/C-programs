#include<stdio.h>
int main(){
    char char1;
    printf("enter the character:");
    scanf("%c",&char1);
   // if(char1 >='0' | char1 <='9') {
     //   printf("the character is number");
   // }
 if((char1>='a' && char1<='z') || (char1>='A' && char1<='Z')){
        printf("the character is a alphabet");
    }
    else{
        printf("invalid character");
    }
    return 0; 
}