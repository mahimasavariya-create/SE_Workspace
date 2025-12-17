#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
     {
        printf(" is a Leap Year %d", year);
    }
    else {
        printf(" is Not a Leap Year %d", year);
    }

    return 0;
}
