#include<stdio.h>
int main(){
    char ch='a' ;
for(int i=4;i>=1;i--){
    for(int j=1;j<=i;j++){
        printf("%c",ch);
    }
    printf("\n");
    ch++;
}
}

