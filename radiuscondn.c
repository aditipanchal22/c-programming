#include<stdio.h>
int main()
{
    float radius;
    printf("enter the radius");
    scanf("%f",& radius);
    if(radius > 0)
    {
    printf("%d radius is positive");
    }
    else
    {
        printf("%d radius is  not positive");
    }
    return 0;
}