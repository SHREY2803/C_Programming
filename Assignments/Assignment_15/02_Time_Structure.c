#include <stdio.h>

typedef struct Time
{
    int hr, min, sec;

} Time;

void displayTime(Time t)
{
    printf("%d : %d : %d\n", t.hr, t.min, t.sec);
}

Time formatTime(Time t)
{
    int tsec = t.sec + t.hr * 3600 + t.min * 60;

    t.hr = tsec / 3600;
    int tempMin = tsec % 3600;
    t.min = tempMin / 60;
    t.sec = tempMin % 60;

    return t;
}

Time storeTime(Time t)
{

    printf("Enter your time here in hrs, min, sec: \n");
    scanf("%d", &t.hr);
    scanf("%d", &t.min);
    scanf("%d", &t.sec);

    return t;
}

Time addTime(Time t1, Time t2)
{
    Time sum;
    sum.hr = t1.hr + t2.hr;
    sum.min = t1.min + t2.min;
    sum.sec = t1.sec + t2.sec;

    return formatTime(sum);
}

int toSeconds(Time t)
{
    return t.hr * 3600 + t.min * 60 + t.sec;
}
int main()
{
    Time t1, t2, result;

    printf("Enter first time:\n");
    t1 = storeTime(t1);

    printf("Enter second time:\n");
    t2 = storeTime(t2);

    printf("\nFirst time: ");
    displayTime(formatTime(t1));

    printf("Second time: ");
    displayTime(formatTime(t2));

    // Add times
    result = addTime(t1, t2);
    printf("\nSum of times: ");
    displayTime(result);

    // Convert to seconds
    printf("\nFirst time in seconds: %d\n", toSeconds(t1));
    printf("Second time in seconds: %d\n", toSeconds(t2));
    printf("Sum of times in seconds: %d\n", toSeconds(result));

    return 0;
}