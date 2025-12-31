#include <stdio.h>
#include<conio.h>

void main()
 {
    int i,j;
    char word[] = "INDIA";

    for (int i = 0; i < 5; i++)
     {
        for (int j = 0; j <= i; j++)
         {
            printf("%c", word[j]);
        }
        printf("\n");
    }

     getch();
}
