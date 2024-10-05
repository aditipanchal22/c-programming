#include<stdio.h>
int main()
{
    float BS,DA,TA,HRA,GS;
    printf("enter basic salary:");
    scanf("%f",&BS);
    printf("DA=%f\n",DA);
    TA=BS*20/100;
    printf("TA=%f\n",TA);
    HRA =BS*20/100;
    printf("HRA=%f \n",HRA);
    GS=BS+DA+TA+HRA;
    printf("gross salary is%f",GS);
    return 0;

}