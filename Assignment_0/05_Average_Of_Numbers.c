#include <stdio.h>

int main()
{

    int a, b, c, d, e;
    printf("Enter your five numbers one by one: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    int avg = (a + b + c + d + e) / 5;
    printf("The average of five numbers is : %d\n", avg);

    return 0;
}