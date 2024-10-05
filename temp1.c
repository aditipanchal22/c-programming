// program to convert temperature from celsius to fahrenheit
#include<stdio.h>
int main()
{
  float celsius,fahrenheit; // variable declaration
  printf("\n enter temp in celsius:");
  scanf("%f",&celsius);
  fahrenheit =(1.8*celsius)+32;
  printf("\n temperature in farenheit : %2f",fahrenheit);
  return 0;
}