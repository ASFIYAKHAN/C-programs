#include<stdio.h>
int main(){
    int arr[10]={2,4,5,6,7,3,8,9,1,0};
    int largest = 0;
    for(int i=0 ;i<10;i++){
        if (largest < arr[i]){
            largest = arr[i];
        }
    }
    printf("it is the largest element in the array %d",largest);
}