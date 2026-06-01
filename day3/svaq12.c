#include <stdio.h>
int main()
{
    int n1,n2,lcm,M;
    printf("enter first value:");
    scanf("%d", &n1);
    printf("enter second value:");
    scanf("%d", &n2);
    M=(n1>n2)?n1:n2;
    lcm=M;
    while(lcm%n1!=0 || lcm%n2!=0)
    {
        lcm=lcm+M;
    }
    printf("lcm of n1 and n2 is : %d", lcm);
    return 0;
}