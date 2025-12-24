#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
     char ch[10] = "Mahimaaa";
     char ch2[10] = "";
     int count=0;

    
    do
    {
       printf("What is your paasword:");
        scanf("%s",ch2); 
         count++;
           
        if(count>=3)
        { 
            printf("\n your are out of limit ");
            return;
        }

    }

while(strcmp(ch2,ch)!=0);

    printf("your password is right");
    
    getch();
}