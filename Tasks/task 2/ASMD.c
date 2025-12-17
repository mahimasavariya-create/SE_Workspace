#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    float a,b,result;

    printf("\n enter your num \n enter 1 for Addition \n enter 2 for Subtraction  \n enter 3 for Multiplication   \n enter 4 for Division \n enter your choice: ");
    scanf("%d",&num);

    if(num>=1&&num<=4)
    {
    printf(" enter your first number:");
    scanf("%f",&a);

    printf(" enter your second number:");
    scanf("%f",&b);
    }

    switch(num)
    {
        case 1:printf("\n you choice Addition");
        result =a+b;
        printf("\n your result is:%f",result);
        break;

        case 2:printf("\n you choice Subtraction");
        result =a-b;
        printf("\n your result is:%f",result);
        break;
        
        case 3:printf("\n you choice Multiplication");
        result =a*b;
        printf("\n your result is:%f",result);
        break;
        
        case 4:printf("\n you choice Division ");
         if(b==0)
            printf("\n Error , Division by Zero is not allowed");

            else 
            {
        result =a/b;
        printf("your result is:%f",result);
            }
        break;
        
        default:printf("\n Invalid choice! ");
        break;

    


    }

    getch();
}