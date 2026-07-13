#include <stdio.h>

int main()
{
    char name[50];
    int age, tickets;
    float total;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    total = tickets * 250;

    printf("\n----- Ticket Details -----\n");
    printf("Passenger Name : %s\n", name);
    printf("Age            : %d\n", age);
    printf("Tickets        : %d\n", tickets);
    printf("Total Amount   : %.2f\n", total);

    return 0;
}