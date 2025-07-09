#include <stdio.h>

void discountCalculator(double total_price, char check_student)
{
    if (check_student == 'y')
    {
        if (total_price >= 500)
        {
            total_price = total_price - (0.2 * total_price);
            printf("Your total price after '20%' discount is : %0.2lf ", total_price);
        }
        else
        {
            total_price = total_price - (0.1 * total_price);
            printf("Your total price after '10%' discount is : %0.2lf", total_price);
        }
    }
    else
    {
        if (total_price >= 600)
        {
            total_price = total_price - (0.15 * total_price);
            printf("Your total price after '15%' discount is : %0.2lf", total_price);
        }
        else
        {
            printf("No discount final price is : %0.2lf", total_price);
        }
    }
}

int main()
{
    char check_student;
    double total_price;

    printf("Enter your total purchased price: \n");
    scanf("%lf", &total_price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &check_student);

    discountCalculator(total_price, check_student);

    return 0;
}