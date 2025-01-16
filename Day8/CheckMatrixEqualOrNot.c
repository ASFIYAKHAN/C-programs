#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int IsEqual = 0;

   printf("the first matrix :");
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
   }

   printf("\n");

   printf("the second matrix :");
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",arr1[i][j]);
    }
    printf("\n");
   }


   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(arr1[i][j] == arr[i][j]){
            IsEqual = 1;
        }
    }
   }
    

    if(IsEqual == 1){
        printf("the both matrix are equal");
    }
    else{
        printf("the matrix are not equal");
    }
}