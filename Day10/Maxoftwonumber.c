#include<stdio.h>
int main(){
    int a =10;
    int b =20;
    int *ptr1 =&a;
    int *ptr2= &b;
    if(*ptr1 > *ptr2){
        printf("a is greater");
    }
    else{
        printf("b is greater");
    }


}