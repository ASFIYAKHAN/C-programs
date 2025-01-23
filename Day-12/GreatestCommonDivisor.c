#include<stdio.h>
int main(){
    int n1 , n2 ,gcd;
    printf("enter two numbers : ");
    scanf("%d%d",&n1,&n2);

    for(int i=1; i<=n1 && i<=n2 ;++i){

        if(n1 % i == 0 && n2 % i ==0){
            gcd = i;
        }
    }
    printf("the gcd of two numbers is :%d",gcd);
    return 0;
}
/*#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}*/