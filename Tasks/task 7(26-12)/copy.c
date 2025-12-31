#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str1[50], str2[50];

    printf("Enter a string: ");
    gets(str1);

    while(str1[50])


    strcpy(str2, str1);

    printf("\n Copied string: %s", str2);

    getch();
}
