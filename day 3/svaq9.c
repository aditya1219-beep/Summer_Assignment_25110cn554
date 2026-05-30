#include <stdio.h>
int main()
{
    int n;
    int i;
    int isprime=0;// isprime=0 means number is a prime number
    printf("enter a number :");
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        isprime=1;// isprime=1 means number is not a prime number
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
