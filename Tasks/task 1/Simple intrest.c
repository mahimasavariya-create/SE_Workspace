#include<stdio.h>
#include<conio.h>
void main()
{
    float p,r,n;

    printf("enter your prnicipal amount:");
    scanf("%f",&p);

    printf("enter your rate of interst:");
    scanf("%f",&r);
    
    printf("enter your number of year :");
    scanf("%f",&n);

    float SI = p*r*n/100;
    printf("simple intrest is:%f",SI);
    
    
    

    getch();
}