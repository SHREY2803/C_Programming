#include <stdio.h>

void sampleCalculator(double n1, double n2, char op)
{
    double result;

    if (op == '+')
    {
        result = n1 + n2;
        printf("Result = %0.2lf\n", result);
    }
    else if (op == '-')
    {
        result = n1 - n2;
        printf("Result = %0.2lf\n", result);
    }
    else if (op == '*')
    {
        result = n1 * n2;
        printf("Result = %0.2lf\n", result);
    }
    else if (op == '/')
    {
        result = n1 / n2;
        printf("Result = %0.2lf\n", result);
    }
    else if (op == '%')
    {
        result = (int)(n1) % (int)(n2);
        printf("Result = %0.2lf\n", result);
    }
    else
    {
        printf("This operator is not available right now.\n");
    }
}

int main()
{
    double n1, n2;
    char op;

    printf("Enter your first number:\n");
    scanf("%lf", &n1);

    printf("Enter your second number:\n");
    scanf("%lf", &n2);

    printf("Enter your operator for desired operation:\n");
    scanf(" %c", &op);

    sampleCalculator(n1, n2, op);

    return 0;
}