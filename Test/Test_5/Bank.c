#include <stdio.h>

double withdrawAmount(double balance, double withdrawMoney)
{
    if (balance < 3000)
    {
        return -1;
    }
    else
    {
        return balance - withdrawMoney;
    }
}

double depositAmount(double balance, double depositMoney)
{
    return balance + depositMoney;
}

int main()
{
    double account_balance;
    printf("Enter your account balance here: \n");
    scanf("%lf", &account_balance);

    int choice;

    do
    {
        printf("\nChoose an option:\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            double deposit_amount;
            printf("How much money do you want to deposit? ");
            scanf("%lf", &deposit_amount);

            account_balance = depositAmount(account_balance, deposit_amount);
            printf("\nYour balance after depositing %.2lf rupees is %.3lf rupees\n", deposit_amount, account_balance);
        }
        else if (choice == 2)
        {
            double withdraw_amount;
            printf("How much money do you want to withdraw? ");
            scanf("%lf", &withdraw_amount);

            double new_balance = withdrawAmount(account_balance, withdraw_amount);

            if (new_balance != -1)
            {
                account_balance = new_balance;
                printf("\nYour balance after withdrawing %.2lf rupees is %.3lf rupees\n", withdraw_amount, account_balance);
            }
            else
            {
                printf("\nWithdrawal not allowed! Account balance must be at least 3000 rupees.\n");
                printf("Your current balance is %.3lf rupees\n", account_balance);
            }
        }
        else if (choice == 0)
        {
            printf("\nThank you! Exiting...\n");
            printf("Your current balance is %.3lf rupees\n", account_balance);
        }
        else
        {
            printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}
