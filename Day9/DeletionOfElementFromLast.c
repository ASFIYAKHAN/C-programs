#include<stdio.h>
int main(){
    int arr[]={2,3,4,5,6,9,7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);


    printf("array before deletion : \n");
    for(int i=0;i<arr_size;i++){
        printf("%d\t",arr[i]);
    }
    arr_size--;

    
    printf("array after deletion : \n");
    for(int i=0;i<arr_size;i++){
        printf("%d\t",arr[i]);
    }
}