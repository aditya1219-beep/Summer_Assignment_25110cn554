#include <stdio.h>
int main()
{
    int n1,n2,i,gcd;
    printf("enter value of first no:");
    scanf("%d",&n1);
    printf("enter value of second no:");
    scanf("%d", &n2);
    for(i=1; i<=n1 && i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0 )
        gcd=i;
    }
    printf("greatest common divisor is : %d",gcd);
    return 0;
}