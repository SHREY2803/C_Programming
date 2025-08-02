#include <stdio.h>

void printFactorsNumber(int n)
{

    printf("%d = ", n);
    for (int i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {

            printf("%d,", i);
        }
    }
    printf("\n");
}

void printFactorsRange(int n1, int n2)
{
    for (int i = n1; i <= n2; i++)
    {
        printFactorsNumber(i);
    }
}

int main()
{
    printf("Enter your two numbers for required range: \n");
    int n1, n2;

    printf("First number: \n");
    scanf("%d", &n1);

    printf("Second number: \n");
    scanf("%d", &n2);

    printFactorsRange(n1, n2);
    // printFactorsNumber(n1);
    return 0;
}