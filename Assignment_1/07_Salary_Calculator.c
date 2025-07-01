#include <stdio.h>

int main()
{
    double b;
    printf("Enter your basic salary here: \n");
    scanf("%lf", &b);

    double total_salary;
    if (b <= 5000)
    {
        total_salary = b + (b * 0.1) + (b * 0.2) + (b * 0.25);
    }
    else
    {
        total_salary = b + (b * 0.15) + (b * 0.25) + (b * 0.3);
    }

    printf("Your total salary is %0.2lf", total_salary);

    return 0;
}