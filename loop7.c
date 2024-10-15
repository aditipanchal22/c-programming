#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("\n i = %d  sum=%d",i,sum);
        sum=sum+i;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}