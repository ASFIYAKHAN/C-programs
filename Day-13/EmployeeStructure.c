//Create a structure to store an employee's ID, name, and salary, and write a program to print the details.
#include<stdio.h>
struct Employee{
    char E_name[20];
    int E_id;
    int E_salary;
};
int main(){
  struct Employee s1;
  printf("\n");
  printf("\n enter the name of the Employee ");
  scanf("%s",s1.E_name);
  printf("\n enter the ID of the %s",s1.E_name);
  scanf("%d",&s1.E_id);
  printf("\n enter the salary of the %s",s1.E_name);
  scanf("%d",&s1.E_salary);

  printf("\n");
  printf("\n the information of the %s employee is ",s1.E_name);
  printf("\n the employee ID of the %s employee is %d ",s1.E_name,s1.E_id);
  printf("\n the salary of the %s employee is %d ",s1.E_name,s1.E_salary);
}