#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
        int i,j,space;

 for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
         for(space=0;space<=5-i;space++)
            {
                printf("* ");
            }
        
        printf("\n");
    }
    getch();
}