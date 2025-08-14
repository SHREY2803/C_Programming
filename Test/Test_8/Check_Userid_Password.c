#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    char userid[50], password[50];
    char correct_userid[] = "admin";     
    char correct_password[] = "1234";   
    int random_num, entered_num;

    // Step 1: Prompt for user ID and password
    printf("Enter User ID: ");
    scanf("%s", userid);

    printf("Enter Password: ");
    scanf("%s", password);

    // Step 2: Verify credentials
    if (strcmp(userid, correct_userid) == 0 && strcmp(password, correct_password) == 0) {
        
        // Step 3: Generate a 4-digit random number
        srand(time(NULL)); // seed the random generator
        random_num = rand() % 9000 + 1000; // ensures number is between 1000 and 9999
        printf("\nVerification Number: %d\n", random_num);

        // Step 4: Ask user to re-enter the number
        printf("Enter the same number: ");
        scanf("%d", &entered_num);

        // Step 5: Check match
        if (entered_num == random_num) {
            printf("\n Login Successful!\n");
        } else {
            printf("\n Login Failed! Incorrect verification number.\n");
        }
    } else {
        printf("\n Login Failed! Invalid User ID or Password.\n");
    }

    return 0;
}
