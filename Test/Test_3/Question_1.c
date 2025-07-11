#include <stdio.h>

void printOddRange(int start, int end)
{
    printf("Odd Numbers: ");
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 1)
        {

            printf("%d ", i);
        }
    }
    printf("\n");
}

void printEvenRange(int start, int end)
{
    printf("Even Numbers: ");
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {

            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int start, end;
    printf("Enter your start and end number here: \n");

    scanf("%d", &start);
    scanf("%d", &end);

    printEvenRange(start, end);
    printOddRange(start, end);

    return 0;
}