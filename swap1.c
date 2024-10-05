// program to swap two integer number without using temporary variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the integr:");
    scanf("%d",&a);
    printf("enter integer number:");
    scanf("%d",&b);
    //logic of swapping
    printf("\n content before swapping a=%d and b=%d,a,b");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n content after swapping a=%d and b=%d,a,b");
    return 0;  
}    