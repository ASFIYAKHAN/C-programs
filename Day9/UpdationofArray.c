#include<stdio.h>
int main(){
    int arr[]={2,3,4,5,6,9,7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int value = 23;
    int pos = 4;

    printf("array before updation: \n");
    for(int i=0;i<arr_size;i++){
        printf("%d\t",arr[i]);
    }

    arr[pos] = value;

    printf("\n");
    printf("array after updation: \n");
    for(int i=0;i<arr_size;i++){
        printf("%d\t",arr[i]);
    }
}