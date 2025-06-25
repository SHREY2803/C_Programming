#include<stdio.h>

int main() {
    float length = 5.2;
    float width = 10;
    float area;

    // printf("The area of reactangle is %f\n"); //to check the garbage value
    area = length * width;

    printf("The area of rectangle with length %0.2f and width %0.2f is: %0.2f\n", length, width, area);
    return 0;
}