#include<stdio.h>
int main(){
    char char1;
    printf("enter the character : ");
    scanf("%c",&char1);
    if(char1 == 'a' | char1 =='e' | char1=='i' | char1=='o' | char1=='u'){
       printf("%c is a vowel",char1);
    }
    else{
        printf("%c is a consonant",char1);
    }
    return 0;
}