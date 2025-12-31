#include<stdio.h>
#include<conio.h>

void  main()
{
    char str[50];
    int len=0 ;

    printf("enter your word:");
    scanf("%s",str);

        while (str[len]!='\0')
        {
            len++;

        }
            printf("\n Length of string = %d", len);

    getch();
}