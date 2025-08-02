#include <stdio.h>

float calculateSellingPrice(float costPrice, float discountPercent)
{
    float sellingPrice;

    if (costPrice > 0)
    {
        if (discountPercent >= 0 && discountPercent <= 100)
        {
            float discountAmount = (discountPercent / 100) * costPrice;
            sellingPrice = costPrice - discountAmount;
        }
        else
        {
            printf("Invalid discount! Must be between 0 and 100.\n");
            sellingPrice = -1;
        }
    }
    else
    {
        printf("Invalid cost price! Must be greater than 0.\n");
        sellingPrice = -1;
    }

    return sellingPrice;
}

int main()
{
    float costPrice, discount, sellingPrice;

    printf("Enter the cost price of the book: ");
    scanf("%f", &costPrice);

    printf("Enter the discount percentage: ");
    scanf("%f", &discount);

    sellingPrice = calculateSellingPrice(costPrice, discount);

    if (sellingPrice != -1)
    {
        printf("The selling price of the book is: %.2f rupees \n", sellingPrice);
    }

    return 0;
}
