#include<stdio.h>
int main()
{
    int marks;
    printf(" enter matks");
    scanf("%d",&marks);
    if(marks>=40)
    {
        printf("you are pass");
    }
    else
    {
        printf(" sorry you are fail");
    }
    return 0;
}