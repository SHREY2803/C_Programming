#include <stdio.h>

int salaryCalculator()
{
    double num;
    printf("Enter your basic salary here: \n");
    scanf("%lf", &num);

    double total_salary = 0;
    if (num <= 5000)
    {
        total_salary = num + (num * 0.1) + (num * 0.2) + (num * 0.25);
    }
    else
    {
        total_salary = num + (num * 0.15) + (num * 0.25) + (num * 0.3);
    }

    // printf("Your total salary is %0.2lf", total_salary);
    return total_salary;
}
int main()
{
    double result = salaryCalculator();
    printf("Your total salary is %0.2lf", result);

    return 0;
}