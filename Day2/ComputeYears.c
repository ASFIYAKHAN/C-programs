#include<stdio.h>
int main(){
    int days , year, weeks, day,remaining;
    printf("enter the number of days :");
    scanf("%d",&days);
    year = days / 365;
    remaining = days % 365;
    weeks = remaining / 7;
    day = remaining % 7;
    printf("\n the years are :%d",year) ;
    printf("\n the weeks  are :%d",weeks) ;
    printf("\n the days are :%d",day) ;
    return 0;
}