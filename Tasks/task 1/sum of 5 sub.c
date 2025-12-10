#include<stdio.h>
#include<conio.h>
void main()
{
  float a,b,c,d,e;

    printf("enter your science marks:");
    scanf("%f",&a);

    printf("enter your maths marks :");
    scanf("%f",&b);
    
    printf("enter your gujarati marks :");
    scanf("%f",& c);

    printf("enter your hindi marks :");
    scanf("%f",& d);

    
    printf("enter your english marks :");
    scanf("%f",& e);

    float total_marks=a+b+c+d+e;
    printf("\n total obtain marks:%f", total_marks);

    float pr= total_marks*100/500;
    printf("\n the parcenta of five subject is:%f",pr);
   
    
    

    getch();
}