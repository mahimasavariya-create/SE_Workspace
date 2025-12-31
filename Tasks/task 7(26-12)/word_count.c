#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    
    char str[50];
    int i, words = 1;

    printf("\n enter your information:");
    scanf("%[^\n]",str);

    for(i=0;str[i] !='\0';i++)
    {
        if(str[i] ==' ')
        {
            words++;        }
    }
    printf("\n number of words=%d",words);
    
    getch();
}









