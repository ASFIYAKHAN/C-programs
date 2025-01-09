#include<stdio.h>
int main(){
    char char1;
    printf("enter the character : ");
    scanf("%c",&char1);
    if (char1 >= 'a' && char1 <='z'){
        printf("%c the character is lower case",char1);
    }
    else if(char1>='A' && char1<='Z'){
        printf("%c the character is upper case",char1);
    }
    else{
        printf("invalid character");
    }
    return 0;
}