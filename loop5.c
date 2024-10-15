// to find all divisor of user given number
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(n%i==0)
        printf("%d\t",i);
        i++;
    }
    return 0;
}