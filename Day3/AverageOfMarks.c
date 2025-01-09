#include<stdio.h>
int main(){
    int phy,chem,bio,math,comp;
    int percentage  ,add;
    printf("\n enter the marks of physics (out of 100) : ");
    scanf("%d",&phy);
    printf("\n enter the marks of chemistry (out of 100): ");
    scanf("%d",&chem);
    printf("\n enter the marks of biology (out of 100): ");
    scanf("%d",&bio);
    printf("\n enter the marks of mathematics (out of 100): ");
    scanf("%d",&math);
    printf("\n enter the marks of computer (out of 100): ");
    scanf("%d",&comp);
     add = phy + chem + bio + math + comp;
    percentage = (float)add / 5;

    if(percentage >= 90){
        printf("%d this is you percentage and you belong to A grade",percentage);
    }
   else if(percentage >= 80){
        printf("%d this is you percentage and you belong to B grade",percentage);
    }
   else  if(percentage >= 70){
        printf("%d this is you percentage and you belong to C grade",percentage);
    }
   else if(percentage >= 60){
        printf("%d this is you percentage and you belong to D grade",percentage);
    }
   else if(percentage >= 40){
        printf("%d this is you percentage and you belong to E grade",percentage);
    }
   else if(percentage < 40){
        printf("%d this is you percentage and you belong to F grade",percentage);
    }
    else{
        printf("you failed");
    }
    return 0;
}