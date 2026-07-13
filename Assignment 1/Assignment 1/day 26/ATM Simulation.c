#include <stdio.h>

int main()
{
    int balance = 10000;
    int amount, choice;

    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Balance = %d", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%d", &amount);

            balance = balance + amount;

            printf("Updated Balance = %d", balance);
            break;

        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%d", &amount);

            if(amount <= balance)
            {
                balance = balance - amount;
                printf("Remaining Balance = %d", balance);
            }
            else
            {
                printf("Insufficient Balance");
            }

            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}