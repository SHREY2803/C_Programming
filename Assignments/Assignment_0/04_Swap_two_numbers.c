#include <stdio.h>

int main()
{
    int a, b;
    a = 30;
    b = 20;

    printf("Before Swapping: \n");
    printf(" a = %d, b=%d\n", a, b);
    int temp;

    // Swapping of two numbers:
    temp = a;
    a = b;
    b = temp;

    printf("\n");
    printf("After Swapping: \n");
    printf(" a = %d, b=%d\n", a, b);

    return 0;
}
