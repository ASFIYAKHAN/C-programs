#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int arr_size=10;
    int position = 0;

    printf("the elements are : ");
    for(int i=0;i<arr_size;i++){
        printf("%d",arr[i]);
        if(i<arr_size-1){
            printf(", ");
        }
    }
    printf("\n");


    for(int j=0; j<arr_size; j++){
        if( j%2 == 0){
            int temp = arr[j];
            arr[j]=arr[position];
            arr[position]=temp;

            position++;
        }
    }
    
   printf("\n");
   printf("the seperated even and odd elements are : ");
    for(int i=0;i<arr_size;i++){
        printf("%d",arr[i]);
        if(i<arr_size-1){
            printf(", ");
        }
    }

}