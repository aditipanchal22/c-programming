 #include<stdio.h>
 int main()
 {
    float percentage=0.0;
    printf("enter percentage :");
    scanf("%f",&percentage);
    if(percentage<40)
       printf("\n sorry, you are fail");
    if(percentage>=40 && percentage<50)  
       printf("\n third class");
    if(percentage>=50 && percentage<60)
       printf("\n second class");
    if(percentage>=60 && percentage<70)
       printf("\n first class");
    if(percentage>=70)
    {
        printf("\n congratulations dist");
    }
     return 0;
}     