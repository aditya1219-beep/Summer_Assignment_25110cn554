#include <stdio.h>
int main()
{
    int n;
    int digit;
    int sum=0;
    printf("enter number:");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
