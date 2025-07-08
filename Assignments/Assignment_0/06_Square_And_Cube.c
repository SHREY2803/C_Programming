#include <stdio.h>

int main()
{
    int number = 7;
    int s, c;

    s = number * number;
    c = number * number * number;

    printf("The square of %d is %d and cuber is %d", number, s, c);

    return 0;
}