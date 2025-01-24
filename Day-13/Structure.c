#include<stdio.h>
struct Student{
  char name[20];
  int rollno;
  int mark;
};
int main(){
   struct Student S1;
   struct Student S2;
   printf("enter the name : ");
   scanf("%s",S1.name);
   printf("enter the rollno : ");
   scanf("%d",&S1.rollno);
   printf("enter the mark : ");
   scanf("%d",&S1.mark);
   
   printf("the student %s information is \n ",S1.name);
   printf("the %s roll no is %d \n",S1.name,S1.rollno);
    printf("the %s marks  is %d \n",S1.name,S1.mark);


   printf("enter the name : ");
   scanf("%s",S2.name);
   printf("enter the rollno : ");
   scanf("%d",&S2.rollno);
   printf("enter the mark : ");
   scanf("%d",&S2.mark);
   
   printf("the student %s information is \n ",S2.name);
   printf("the %s roll no is %d \n",S2.name,S2.rollno);
    printf("the %s marks  is %d \n",S2.name,S2.mark);
}