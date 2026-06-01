#include <stdio.h>
int main()
{
    int n,i,isprime=0;
    printf("enter number to be checked:");
    scanf("%d", &n);
    if(n==0 || n==1)
    {
        isprime=1; //means number is not a prime number
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            isprime=1;
            break;
        }
    }
    if(isprime==0)
    {
        printf("entered number is a prime number");
    }
    else 
    {
        printf("entered number is not a prime number");
    }
    return 0;
}
