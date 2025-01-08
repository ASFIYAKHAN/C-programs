#include<stdio.h>
int main(){
    float w1,w2,p1,p2,result;
    printf("enter the weight of first item (Floating number) : ");
    scanf("%f",&w1);
    printf("enter how purchases you did (Floating number) : ");
    scanf("%f",&p1);
    printf("enter the weight of second item (Floating number) : ");
    scanf("%f",&w2);
    printf("enter how purchases you did (Floating number) : ");
    scanf("%f",&p2);
    result = (w1*p1)+(w2*p2)/2;
    printf("average of the items is :%f",result);
    return 0;
}
