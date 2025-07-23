#include <stdio.h>

int checkTraingle()
{
    int s1, s2, s3;

    printf("Enter the sides of your triangle:\n");
    scanf("%d", &s1);
    scanf("%d", &s2);
    scanf("%d", &s3);

    if ((s1 + s2 > s3) && (s2 + s3 > s1) && (s1 + s3 > s2))
    {

        if (s1 == s2 && s2 == s3)
        {
            return 1;
        }
        else if (s1 == s2 || s2 == s3 || s1 == s3)
        {
            return 2;
        }
        else
        {
            return 3;
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    int result = checkTraingle();
    if (result == 1)
    {
        printf("Equilateral Triangle");
    }
    else if (result == 2)
    {
        printf("Isoceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }
}