#include<stdio.h>
int main(){
    char char1;
    printf("enter the character : ");
    scanf("%c",&char1);
    if((char1>='a'&& char1<='z') || (char1>='A'&& char1<='Z')){
       printf("%c is a alphabet",char1);
    }
    else if( char1>='0'&& char1<='9'){
        printf("%c is a digit ",char1);
    }
    else{
        printf("%c is a special character",char1);
    }
    return 0;
}