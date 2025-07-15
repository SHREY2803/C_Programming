#include <stdio.h>

void sumOfNum()
{
    int n1, n2;

    printf("Enter the numbers n1 and n2, to find the sum of numbers from the range of n1 and n2: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    int sum = 0;

    if (n1 < n2)
    {
        while (n1 <= n2)
        {
            sum = sum + n1;
            n1++;
        }
    }
    else
    {
        while (n2 <= n1)
        {
            sum = sum + n2;
            n2++;
        }
    }

    printf("The total sum of numbers from range of n1 and n2 is %d\n", sum);
}

int main()
{
    sumOfNum();
    return 0;
}