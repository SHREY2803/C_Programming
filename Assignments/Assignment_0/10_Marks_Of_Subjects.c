#include <stdio.h>

int main() {
    float eng, science, maths, ss, hindi;

    printf("Enter the marks of all subjects:\n");
    
    printf("English: ");
    scanf("%f", &eng);

    printf("Science: ");
    scanf("%f", &science);

    printf("Maths: ");
    scanf("%f", &maths);

    printf("Social Studies: ");
    scanf("%f", &ss);

    printf("Hindi: ");
    scanf("%f", &hindi);

    float total = eng + science + maths + ss + hindi;

    float percentage = (total * 100) / 500;

    printf("Total Marks: %.2f / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
