#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the three numbers :");
    scanf("%d%d%d",&a,&b,&c);

    if(a > b & a > c ){
        printf("%d is greater than other 2 numbers ",a);
    }
    else if(c > b & c > a){
        printf("%d is greater than other 2 numbers ", c);
    }
    else if( a == b == c){
        printf("%d%d%d all the numbers are equal ",a,b,c);
    }
    else if (a == b | b == c | c == a){
        printf("two of the numbers are equal");
    }
    else{
        printf("%d is greater than other 2 numbers ",b);
    }
}