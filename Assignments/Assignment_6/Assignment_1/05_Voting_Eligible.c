#include <stdio.h>

void votingEligible(int age)
{
    if (age >= 18)
    {
        printf("You are eligible to vote");
    }
    else
    {
        printf("You are not eligible to vote");
    }
}

int main()
{
    int age;
    printf("Enter your age to check whether you are eligible for voting or not: \n");
    scanf("%d", &age);

    votingEligible(age);
    return 0;
}