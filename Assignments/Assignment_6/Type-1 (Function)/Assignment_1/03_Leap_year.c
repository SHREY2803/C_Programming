#include <stdio.h>

void checkLeapYear(); // function declaration

int main()
{
    checkLeapYear(); // function call
    return 0;
}

void checkLeapYear() // function defination
{
    int year;
    printf("Enter the year number to check whether it is leap year or not: \n");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("It is a leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }
}