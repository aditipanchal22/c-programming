// program to print size of datatype
#include<stdio.h>
int main()
{
    int size;
    size = sizeof (char);
    printf("\n size of character is %d",size);
    size = sizeof (int);
    printf("\n size of integer is %d",size);
    size = sizeof (short int);
    printf("\n size of short integer is %d",size);
    size = sizeof (long int);
    printf("\n size of long integer  is %d",size);
    size = sizeof (float);
    printf("\n size of float is %d",size);
    size = sizeof (double);
    printf("\n size of double is %d",size);
    size = sizeof (long double);
    printf("\n size of long double is %d",size);
    return 0;
}     