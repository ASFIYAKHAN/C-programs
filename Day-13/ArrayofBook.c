//Create an array of structures to store information of 5 books (title, author, price) and display them.
#include<stdio.h>
struct ArrayofBook{
    char title[20];
    char author[20];
    int price;
};
int main(){
    struct ArrayofBook a[3];
    for(int i=0 ;i < 3;i++){

        
        printf("\n");
        printf("enter the details of book \n");
        printf("enter the title of book : ");
        scanf("%s",a[i].title);
        printf("enter the author of book : ");
        scanf("%s",a[i].author);
        printf("enter the price of book : ");
        scanf("%d",&a[i].price);

        printf("\n");
        printf("\n the information the book are :");
        printf("\n the title of book is %s",a[i].title);
        printf("\n the author of book is %s",a[i].author);
        printf("\n the title of book is %d",a[i].price);
    }
    
}
