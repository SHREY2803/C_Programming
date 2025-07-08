#include <stdio.h>

int main()
{
    float c, f;
    c = 37;
    f = (c * 9 / 5) + 32;
    printf("The converted temperature for %.2f to fahrenheit is: %.2f\n", c, f);

    return 0;
}