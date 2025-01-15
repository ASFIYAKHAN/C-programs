#include<stdio.h>
int main(){
    int arr[10]={2,9,6,3,4,8,5,7,10,1};
    int arr_size=10;

    printf("the elements are : ");
    for(int i=0; i<arr_size ;i++){
        printf("%d",arr[i]);

        if(i < arr_size - 1){
            printf(", ");
        }
    }
    printf("\n");

    for(int i=0 ;i<arr_size ;i++){

        for(int j=i+1 ; j<arr_size ;j++){

            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("the sorted elements is ascending order are : ");
    for(int i=0; i<arr_size ;i++){
        printf("%d",arr[i]);

        if(i < arr_size - 1){
            printf(", ");
        }
    }
}