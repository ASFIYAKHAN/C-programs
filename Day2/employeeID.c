#include <stdio.h>
int main() {     
    int id,hour;           
    double value, salary;
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%d", &id);
    printf("\nInput the working hrs: ");
    scanf("%d", &hour);
    printf("\nSalary amount/hr: ");
    scanf("%lf", &value);
    salary = value * hour;
    printf("\nEmployees ID = %d\nSalary = U$ %.2f\n", id, salary);

    return 0;
}