#include <stdio.h>

int main()
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
            printf("Equilateral Traingle\n");
        }
        else if (s1 == s2 || s2 == s3 || s1 == s3)
        {
            printf("Isoceles Triangle\n");
        }
        else
        {
            printf("Scalene Triangle\n");
        }
    }
    else
    {
        printf("Invalid triangle\n");
    }
}