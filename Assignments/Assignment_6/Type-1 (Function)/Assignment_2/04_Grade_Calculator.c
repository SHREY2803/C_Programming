#include <stdio.h>

void gradeCalculator(int marks)
{
    if (marks >= 75)
    {
        printf("Distinction\n");
    }
    else if (marks >= 65 && marks < 75)
    {
        printf("First Class\n");
    }
    else if (marks >= 55 && marks < 65)
    {
        printf("Second Class\n");
    }
    else if (marks >= 40 && marks < 55)
    {
        printf("Pass Class\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    double marks;

    printf("Enter your marks here: \n");
    scanf("%lf", &marks);

    gradeCalculator(marks);
    return 0;
}