#include <stdio.h>

int checkLeapYear(int year); // function declaration

int main()
{
    int year;
    printf("Enter the year number to check whether it is leap year or not: \n");
    scanf("%d", &year);

    int result = checkLeapYear(year); // function call
    if (result)
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
    return 0;
}

int checkLeapYear(int year) // function defination
{

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}