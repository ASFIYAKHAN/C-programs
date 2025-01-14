#include<stdio.h>
int main(){
    for(char ch='A';ch<='D';ch++){
        for(int j=1;j<=4;j++){
            printf("%c\t",ch);
        }
      printf("\n");  
    }
}