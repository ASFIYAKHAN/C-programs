#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int transpose[3][3];

    printf("the matrix is\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          printf("%d\t",arr[i][j]);
        }
       printf("\n"); 
    }


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           transpose[j][i] = arr[i][j];
        }
    }
 

    printf("the transpose of the matrix is\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          printf("%d\t",transpose[i][j]);
        }
       printf("\n"); 
    }
}