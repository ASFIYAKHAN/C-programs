#include<stdio.h>
int main(){
    int i = 1;
    while(i<=4){
        int j =1;
        while(j<=i){
            printf("*\t",j);
            j++;
        }
        i++;
        printf("\n");
    }
}