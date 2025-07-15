#include <stdio.h>

int votingEligible()
{
    int age;
    printf("Enter your age to check whether you are eligible for voting or not: \n");
    scanf("%d", &age);

    if (age >= 18)
    {
        
        return 1;
    }
    else
    {

        return 0;
    }
}

int main()
{
    int result = votingEligible();
    if (result)
    {
        printf("You are eligible to vote\n");
    }
    else
    {
        printf("You are not eligible to vote\n");
    }

    return 0;
}