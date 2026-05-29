#include <stdio.h>
int main()
{
    long long n;
    int digit;
    long long product=1;
    printf("enter a number:");
    scanf("%lld",&n);
    if(n==0)
    {
        printf("product of number =0");
        
    }
    while(n>0)
    {
        digit= n%10;
        product= product*digit;
        n=n/10;
    }
    printf("%lld\n", product);
    return 0;
}