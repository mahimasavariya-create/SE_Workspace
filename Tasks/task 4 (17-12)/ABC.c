#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,num;
    char c='A';

    printf("enter your num:");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
    {
        c='A';
        for(j=0;j<=i;j++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    getch();
}



