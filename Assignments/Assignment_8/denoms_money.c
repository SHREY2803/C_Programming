#include <stdio.h>

int main()
{
    int num = 5234;

    // First approach 

    // int note_500 = 0, note_200 = 0, note_100 = 0, note_50 = 0;
    // int note_20 = 0, note_10 = 0, note_5 = 0, note_2 = 0, note_1 = 0;

    // while (num > 0) {
    //     if (num >= 500) {
    //         note_500 = num / 500;
    //         num %= 500;
    //     }
    //     else if (num >= 200) {
    //         note_200 = num / 200;
    //         num %= 200;
    //     }
    //     else if (num >= 100) {
    //         note_100 = num / 100;
    //         num %= 100;
    //     }
    //     else if (num >= 50) {
    //         note_50 = num / 50;
    //         num %= 50;
    //     }
    //     else if (num >= 20) {
    //         note_20 = num / 20;
    //         num %= 20;
    //     }
    //     else if (num >= 10) {
    //         note_10 = num / 10;
    //         num %= 10;
    //     }
    //     else if (num >= 5) {
    //         note_5 = num / 5;
    //         num %= 5;
    //     }
    //     else if (num >= 2) {
    //         note_2 = num / 2;
    //         num %= 2;
    //     }
    //     else {
    //         note_1 = num;
    //         num = 0;
    //     }
    // }

    // printf("You will need:\n");
    // printf("%d notes of 500\n", note_500);
    // printf("%d notes of 200\n", note_200);
    // printf("%d notes of 100\n", note_100);
    // printf("%d notes of 50\n", note_50);
    // printf("%d notes of 20\n", note_20);
    // printf("%d notes of 10\n", note_10);
    // printf("%d coins of 5\n", note_5);
    // printf("%d coins of 2\n", note_2);
    // printf("%d coins of 1\n", note_1);


    // Second Approach
    
    int denoms[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int cnt[9];

    int n = sizeof(denoms) / sizeof(denoms[0]);
    for (int i = 0; i < n; i++)
    {
        cnt[i] = num / denoms[i];
        num = num % denoms[i];
    }

    printf("You will need:\n");
    for (int i = 0; i < n; i++)
    {
        if (denoms[i] >= 10)
        {
            printf("%d notes of %d\n", cnt[i], denoms[i]);
        }
        else
        {
            printf("%d coin of %d\n", cnt[i], denoms[i]);
        }
    }

    return 0;
}
