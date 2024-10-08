#include<stdio.h>
int main()
{
    int speed;
    printf("enter the speed");
    scanf("%d",&speed);
    if( speed > 55)
    {
        printf("%d speed is greaer than 55",speed);
    }
    else
    {
        printf("%d speed is less than 55",speed);
    }
    return 0;
}