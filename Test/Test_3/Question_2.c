#include <stdio.h>

int addAlternateNumbers(int start, int end)
{
    int sum = 0;
    printf("Alternate Numbers are : ");
    for (int i = start; i <= end; i += 2)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\n");

    return sum;
}

int main()
{
    int start, end;
    printf("Enter your start and end number here: \n");

    scanf("%d", &start);
    scanf("%d", &end);

    int result = addAlternateNumbers(start, end);
    printf("The sum of alternate numbers is %d", result);

    return 0;
}