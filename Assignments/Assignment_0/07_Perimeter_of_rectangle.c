#include <stdio.h>

int main()
{

    int length, breadth;

    printf("Enter the length and breadth of the rectangle:\n");
    scanf("%d", &length);
    scanf("%d", &breadth);

    int perimeter = 2 * (length + breadth);

    printf("The perimeter of the rectangls is : %d", perimeter);
    return 0;
}