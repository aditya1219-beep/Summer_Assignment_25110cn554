#include <stdio.h>
int main()
{
    int n,i,j,start,end;
    printf("enter start number");
    scanf("%d", &start);
    printf("enter end number");
    scanf("%d", &end);
    for(i=start;i<=end;i++)
    {
    n=i;
    int isprime=0;
    if(n==0 || n==1)
    {
        isprime=1; //means number is not a prime number
    }
    for(j=2;j<=n/2;j++)
    {
        if(n%j==0)
        {
            isprime=1;
            break;
        }
    }
    

    if(isprime==0)
    {
        printf("%d\t",n);
    }
 }
    return 0;
}