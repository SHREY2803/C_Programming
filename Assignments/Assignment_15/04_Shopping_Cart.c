#include <stdio.h>
#include <string.h>

typedef struct Cart
{
    char p_name[50];
    int price;
    int quantity;
} Cart;

void addProducts(Cart *ct, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter product %d details:\n", i + 1);
        printf("Name: ");
        scanf(" %49[^\n]", ct[i].p_name);
        printf("Price: ");
        scanf("%d", &ct[i].price);
        printf("Quantity: ");
        scanf("%d", &ct[i].quantity);
    }
}

int displayCart(Cart *ct, int n)
{
    int total = 0;
    printf("\n--- Cart Items ---\n");
    for (int i = 0; i < n; i++)
    {
        int subtotal = ct[i].price * ct[i].quantity;
        printf("%d. %s - Price: %d, Quantity: %d, Subtotal: %d\n",
               i + 1,
               ct[i].p_name,
               ct[i].price,
               ct[i].quantity,
               subtotal);
        total += subtotal;
    }
    return total;
}

int main()
{
    Cart ct[1000];
    int n;

    printf("Enter number of products to add to the cart: ");
    scanf("%d", &n);

    addProducts(ct, n);
    int totalCost = displayCart(ct, n);

    printf("\nTotal cost: %d\n", totalCost);

    return 0;
}
