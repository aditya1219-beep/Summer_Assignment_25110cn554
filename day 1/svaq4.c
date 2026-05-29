#include <stdio.h>
int main()
{
    int n;
    int count=0;
    printf("enter number:");
    scanf("%d",&n);
    if(n==0)
    {
        count=1;
    }
    while(n>0)
    {
        n=n/10;
        count++;
    }
    printf("%d",count);
    return 0;
}