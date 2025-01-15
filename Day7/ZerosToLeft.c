#include<stdio.h>
int main(){
    int arr[8]={2,3,4,0,5,0,7,0};
    int arr_size = 8;
    int position = 0;
    printf("the elements are : ");
    for(int i=0 ; i<arr_size ; i++){  
        printf("%d",arr[i]);

        if(i < arr_size-1){
            printf(", ");
        }
    }
  printf("\n");
    for(int j=0; j<arr_size; j++){
        if(arr[j]==0){
            int temp = arr[j];
            arr[j]= arr[position];
            arr[position]=temp;


            position++;
        }
    }
  
  printf("\n");
  printf("the sorted elements are : ");
    for(int i=0 ; i<arr_size ; i++){
        printf("%d",arr[i]);

        if(i < arr_size-1){
            printf(", ");
        }
    }
}