#include <stdio.h>

double sampleCalculator()
{
    double n1, n2;
    char op;

    printf("Enter your first number:\n");
    scanf("%lf", &n1);

    printf("Enter your second number:\n");
    scanf("%lf", &n2);

    printf("Enter your operator for desired operation:\n");
    scanf(" %c", &op);

    double result;

    if (op == '+')
    {
        result = n1 + n2;
    }
    else if (op == '-')
    {
        result = n1 - n2;
    }
    else if (op == '*')
    {
        result = n1 * n2;
    }
    else if (op == '/')
    {
        result = n1 / n2;
    }
    else if (op == '%')
    {
        result = (int)(n1) % (int)(n2);
    }

    return result;
}

int main()
{

    double result = sampleCalculator();
    printf("The byproduct of your operation is %0.2lf ", result);

    return 0;
}