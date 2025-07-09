#include <stdio.h>

int calTotalSec(int hr, int min, int sec)
{
    int total_sec = 0;

    total_sec += (hr * 3600) + (min * 60) + sec;

    return total_sec;
}

int main()
{
    int hr, min, sec;

    printf("Enter hours: \n");
    scanf("%d", &hr);

    printf("Enter minutes: \n");
    scanf("%d", &min);

    printf("Enter seconds: \n");
    scanf("%d", &sec);

    int result = calTotalSec(hr, min, sec);
    printf("Total seconds : %d", result);

    return 0;
}