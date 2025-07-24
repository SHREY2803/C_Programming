#include <stdio.h>

double discountCalculator(char check_student, double total_price)
{

    if (check_student == 'y')
    {
        if (total_price >= 500)
        {
            total_price = total_price - (0.2 * total_price);
        }
        else
        {
            total_price = total_price - (0.1 * total_price);
        }
    }
    else
    {
        if (total_price >= 600)
        {
            total_price = total_price - (0.15 * total_price);
        }
    }

    return total_price;
}

int main()
{
    char check_student;
    double total_price;

    printf("Enter your total purchased price: \n");
    scanf("%lf", &total_price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &check_student);

    double result = discountCalculator(check_student, total_price);

    if (check_student == 'y')
    {
        if (total_price >= 500)
        {

            printf("Your total price after '20%' discount is : %0.2lf ", result);
        }
        else
        {

            printf("Your total price after '10%' discount is : %0.2lf", result);
        }
    }
    else
    {
        if (total_price >= 600)
        {

            printf("Your total price after '15%' discount is : %0.2lf", result);
        }
        else
        {

            printf("No discount final price is : %0.2lf", result);
        }
    }

    return 0;
}