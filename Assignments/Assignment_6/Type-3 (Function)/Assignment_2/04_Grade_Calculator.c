#include <stdio.h>

int gradeCalculator()
{
    double marks;

    printf("Enter your marks here: \n");
    scanf("%lf", &marks);

    if (marks >= 75)
    {
        return 1;
        // printf("Distinction\n");
    }
    else if (marks >= 65 && marks < 75)
    {
        return 2;
        // printf("First Class\n");
    }
    else if (marks >= 55 && marks < 65)
    {
        return 3;
        // printf("Second Class\n");
    }
    else if (marks >= 40 && marks < 55)
    {
        return 4;
        // printf("Pass Class\n");
    }
    else
    {
        return 0;
        // printf("Fail\n");
    }
}

int main()
{
    int result = gradeCalculator();
    if (result == 1)
    {
        printf("Distinction\n");
    }
    else if (result == 2)
    {
        printf("First Class\n");
    }
    else if (result == 3)
    {
        printf("Second Class\n");
    }
    else if (result == 4)
    {
        printf("Pass Class\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}