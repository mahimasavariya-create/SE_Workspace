#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0;

    printf("enter your numbers:");
    scanf("%d",&num);

    while(num>0)
    {
        int rem = num%10;
        sum+=rem;
        num=num/10;
     }
     
    printf("sum of all numbers is:%d",sum);

    getch();

}