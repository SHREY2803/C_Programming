#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age here: \n");
    scanf("%d", &age);

    if (age >= 60)
    {
        printf("You fall under the Senior category.\n");
    }
    else if (age < 60 && age >= 20)
    {
        printf("You fall under the Adult category.\n");
    }
    else if (age < 20 && age >= 12)
    {
        printf("You fall under the Teenager category.\n");
    }
    else
    {
        printf("You fall under the Child category.\n");
    }

    return 0;
}