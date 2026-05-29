#include <stdio.h>
int main()
{
    int n;
    int digit;
    int rev=0;
    int temp;
    printf("enter number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("entered number is palindrome");
    }
    else
    {
        printf("number is not a palindrome");
    }
    return 0;
    
}