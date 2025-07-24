#include <stdio.h>

int checkAgePerson(int age)
{
    if (age >= 60)
    {
        // printf("You fall under the Senior category.\n");
        return 1;
    }
    else if (age < 60 && age >= 20)
    {
        // printf("You fall under the Adult category.\n");
        return 2;
    }
    else if (age < 20 && age >= 12)
    {
        // printf("You fall under the Teenager category.\n");
        return 3;
    }
    else
    {
        // printf("You fall under the Child category.\n");
        return 0;
    }
}

int main()
{
    int age;

    printf("Enter your age here: \n");
    scanf("%d", &age);

    int result = checkAgePerson(age);
    if (result == 1)
    {
        printf("You fall under the Senior category.\n");
    }
    else if (result == 2)
    {
        printf("You fall under the Adult category.\n");
    }
    else if (result == 3)
    {
        printf("You fall under the Teenager category.\n");
    }
    else
    {
        printf("You fall under the Child category.\n");
    }

    return 0;
}