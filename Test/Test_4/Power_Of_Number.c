#include <stdio.h>
#include <stdlib.h>

// double exponentValue(int n, int power)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }

//     double ans = 1;
//     int absPower = abs(power);

//     // n>0
//     for (int i = 1; i <= absPower; i++)
//     {
//         ans = ans * n;
//     }

//     if (power < 0)
//     {
//         return ans = 1.0 / ans;
//     }
//     else
//     {
//         return ans;
//     }
// }

double exponentValue(int n, int power)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    double ans = 1;
    int absPower = abs(power);

    while (absPower > 0)
    {
        if (absPower % 2 == 0)
        {
            n = n * n;
            absPower = absPower / 2;
        }
        else
        {
            ans = ans * n;
            absPower = absPower - 1;
        }
    }

    if (power < 0)
    {
        return ans = 1.0 / ans;
    }
    else
    {
        return ans;
    }
}

int main()
{
    printf("Enter base number here : ");
    int n;
    scanf("%d", &n);

    printf("Enter power number here : ");
    int power;
    scanf("%d", &power);

    double result = exponentValue(n, power);
    printf("The value of your expression is : %0.6lf\n", result);

    return 0;
}