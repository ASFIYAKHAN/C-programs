#include<stdio.h>
int main(){
    int arr[2][2]={{1,2},{3,4}};
    int arr1[2][2]={{5,6},{7,8}};
    int arr2[2][2];
    
    for(int i=0;i<2;i++){
       for(int j=0;j<2;j++){
        
         arr2[i][j]=0;

         for(int k=0;k<2;k++){
            arr2[i][j] = arr2[i][j] + arr[i][k] * arr1[k][j];
         }

        }
       }
    

    printf("the multiply of elements are :\n ");
    for(int i=0;i<2;i++){
       for(int j=0;j<2;j++){
        printf("%d\t",arr2[i][j]);
       }
      printf("\n"); 
    }
}