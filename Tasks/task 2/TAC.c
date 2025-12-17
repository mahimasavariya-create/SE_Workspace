#include<stdio.h>
#include<conio.h>
void main()
{
     int choice;
     float base, height, length, width, radius, area;

     printf("\n enter your num \n enter 1 for Triangle \n enter 2 for Rectangle   \n enter 3 for Circle  \n enter your choice: ");
    scanf("%d",&choice);
   
    if(choice==1)
{
    printf("\n Enter the base of the triangle : ");
        scanf("%f",&base);

        printf("\n Enter the height of the triangle : ");
        scanf("%f",&height);

        area = 0.5*base*height;
        printf("\n Area of Triangle is : %f",area);
}
     else if(choice==2)
{
    printf("\n Enter the length of the Rectangle : ");
        scanf("%f",&length);

        printf("\n Enter the width of the Rectangle : ");
        scanf("%f",&width);

        area =length*height;
        printf("\n Area of Rectangle is : %f",area);
    
}
     else if(choice==3)
{
    printf("\n Enter the radius of the Circle  : ");
        scanf("%f",&radius);

        area = radius*radius;
        printf("\n Area of Circle is : %f",area);
}
else
{
    printf("\n Invalid choice !");
}





    getch();
}