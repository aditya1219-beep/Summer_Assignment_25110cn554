#include <stdio.h>
int main()
{
    int n,i;
    long long fact=1;
    printf("enter number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%lld\n",fact);
    return 0;

}