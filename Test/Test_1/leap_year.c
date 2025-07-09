#include <stdio.h>

int checkLeapYear(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        return 1;
    }

    return 0;
}
int main()
{
    int year;
    printf("Enter the year that you want to check: ");
    scanf("%d", &year);

    if (checkLeapYear(year))
    {
        printf("It is a Leap year");
    }
    else
    {
        printf("Not a Leap year");
    }

    return 0;
}