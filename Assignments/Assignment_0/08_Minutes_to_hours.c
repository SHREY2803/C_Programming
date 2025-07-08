#include <stdio.h>

int main()
{
    int min, hrs;
    min = 230;

    int temp = min;
    hrs = temp / 60;
    min = temp % 60;

    printf("The aprrox time for %d minutes in hrs is : %d hrs and %d mins ", temp, hrs, min);

    return 0;
}