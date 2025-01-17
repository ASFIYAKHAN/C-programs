#include<stdio.h>
int main(){
    int arr[]={2,3,4,5,6,9,7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int pos = 3;



    printf("Array before deletion \n");
    for(int i=0;i<arr_size;i++){
        printf("%d\t",arr[i]);
    }

    for(int i=pos;i<arr_size;i++){
        arr[i-1]=arr[i];
    }

    arr_size--;
 
    printf("\n");
    printf("Array after deletion \n");
    for(int i=0;i<arr_size;i++){
        printf("%d\t",arr[i]);
    }



}