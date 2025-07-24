#include <stdio.h>

// Global variables
char check_student;
double total_price;

double discountCalculator()
{
    if (check_student == 'y')
    {
        if (total_price >= 500)
        {
            return total_price - (0.2 * total_price);
        }
        else
        {
            return total_price - (0.1 * total_price);
        }
    }
    else
    {
        if (total_price >= 600)
        {
            return total_price - (0.15 * total_price);
        }
        else
        {
            return total_price; // no discount
        }
    }
}

int main()
{
    printf("Enter your total purchased price: \n");
    scanf("%lf", &total_price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &check_student); // leading space avoids newline issues

    double result = discountCalculator();

    if (check_student == 'y')
    {
        if (total_price >= 500)
            printf("Your total price after '20%%' discount is: %.2lf\n", result);
        else
            printf("Your total price after '10%%' discount is: %.2lf\n", result);
    }
    else
    {
        if (total_price >= 600)
            printf("Your total price after '15%%' discount is: %.2lf\n", result);
        else
            printf("No discount. Final price is: %.2lf\n", result);
    }

    return 0;
}
