#include <stdio.h>

int main()
{
    double units;
    printf("Enter your electricity units: \n");
    scanf("%lf", &units);

    double total_bill = 0;

    if (units <= 50)
    {
        total_bill = (units * 30);
    }
    else if (units <= 150)
    {
        total_bill = (units * 40);
    }
    else
    {
        total_bill = (units * 50);
    }

    printf("Yout total electricity bill is Rs %0.2lf\n", total_bill);

    return 0;
}