#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    int b;

    printf(" enter your first value :");
    scanf("%d",&a);

    printf("enter your second value:");
    scanf("%d",&b);

    int add = a+b;
    int sub = a-b;
    int mul = a*b;
    int div = a/b;
    int mod = a%b;
    

    printf("\n Your Addition is : %d",add);
    printf("\n Your Substraction is : %d",sub);
    printf("\n Your Multiplication is : %d",mul);
    printf("\n Your Division is : %d",div);
    printf("\n Your Modulus is : %d",mod);
  

    getch();

}
