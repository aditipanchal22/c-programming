// program to convert temperature from fahrenheit to celcius
#include<stdio.h>
void main()
{
   float celsius,fahrenheit;   // variable declaration
   printf("\n enter the temperature in fahrenheit");
   scanf("%f",& fahrenheit);
   celsius = (fahrenheit-32) /  1.8;
   printf("\n temperature in celsius %2f",celsius);
   return 0;
}
