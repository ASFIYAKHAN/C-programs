#include<stdio.h>
struct student{
    char name[20];
    int rollno;
    int mark;
};
int main(){
    struct student s[3];
    printf("enter the information of student \n");

    for(int i=0 ;i<3;i++){
        printf("\n");
        printf("enter the name of student ");
       // scanf("%s",s[i].name);
       fgets(s[i].name,20,stdin);
        printf("enter the roll no of %s ",s[i].name);
        scanf("%d",&s[i].rollno);
        printf("enter the marks of %s ",s[i].name);
        scanf("%d",&s[i].mark);


        printf("\n");
        printf("\n the student information of %s ",s[i].name);
        printf("\n the name of student %s ",s[i].name);
        printf("\n the roll no of %d ",s[i].rollno);
        printf("\n the marks of %d ",s[i].mark);
    }
}