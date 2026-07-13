#include <stdio.h>

int main()
{
    int accNo, choice;
    float balance = 5000, amount;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("\n1. Check Balance");
    printf("\n2. Deposit");
    printf("\n3. Withdraw");

    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Current Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            balance = balance + amount;

            printf("Updated Balance = %.2f", balance);
            break;

        case 3:
            printf("Enter Withdraw Amount: ");
            scanf("%f", &amount);

            if(amount <= balance)
            {
                balance = balance - amount;
                printf("Remaining Balance = %.2f", balance);
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