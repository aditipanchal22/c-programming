// program to swap integer number with using temporary variable
#include<stdio.h>
int main()
{
int a,b,t;                   // variable declaration
printf("enter the integer number :");     //display prompt to user
scanf("%d",&a);//accept an integer from user
printf("enter the integer number :");//display prompt to user
scanf("%d",&b);//accept an integer form user
// logic of swaping
printf("\n content before swapping a=%d and b=%d ,a,b");
t=a;
a=b;
b=t;
printf("\n content after swapping a=%d and b=%d,a,b");
return 0;

}