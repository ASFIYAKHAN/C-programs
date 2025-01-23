#include<stdio.h>
int Loop(int x){
    printf("%d\n",x);
     if(x == 10)
     return 0;
     Loop(x + 1);
}

void main(){
    int a = 1;
    Loop(a);
}