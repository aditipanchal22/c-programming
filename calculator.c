// program to demonstrate simple calculator
#include<stdio.h>
int main()
{
    int number1,number2,sum,sub,mult,div,mod;
    printf("enter the integer number:");
    scanf("%d",& number1);
    printf("enter teh integer number:");
    scanf("%d",& number2);
 
 // calculate the sum
    sum=number1+number2;
    printf("\naddition of %d and %d = %d",number1,number2,sum);

// calculate the subtraction
    sub= number1-number2;
    printf("\nsubtraction of %d and %d=%d",number1,number2,sub);

//calculate the multiplication
    mult = number1*number2;
    printf("\nmultiplication of %d and %d = %d",number1,number2,mult);

//calculate the division
    div= number1/number2;
    printf("\ndivision of %d and %d = %d",number1,number2,div);

 //calculate the modulo division 
   mod = number1 % number2;
   printf("\nmodulo division of %d and %d = %d",number1,number2,mod);
   return 0;
}