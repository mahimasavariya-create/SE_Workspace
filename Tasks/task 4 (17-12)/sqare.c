#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,num,square;

    printf("enter your num:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        square = i*i;
        for(j=1;j<=i;j++)
        {
            printf("%d",square);
        }
        printf("\n");
    }
    getch();
}



