#include<stdio.h>
int CallbyReference(int *a ,int *b){
    *a = 23;
    *b = 34;
    printf("Inside the function the values are %d & %d\n",*a,*b);
}

void main(){
    int x = 10;
    int y = 20;
    printf("In main method the values are : %d & %d\n",x,y);
    CallbyReference(&x,&y);
    printf("After the function call the values are %d & %d\n",x,y);
}
