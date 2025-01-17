#include<stdio.h>
int main(){
    int arr[10]={23,45,67,89,43,56};
    int size = 6;
    int position = 4;
    int value = 22;

    for(int i = size; i > position ;i--){
          arr[i]=arr[i-1];
    }
    arr[position] = value;
    size++;

    for(int i=0;i<size ; i++){
        printf("%d\t",arr[i]);
    }
}