
#include <stdio.h>

int main()
{
    int balance[5] = {15000, 25000, 18000, 32000, 12000};
    int *p = balance;
    int customer, amount;

    printf("Enter customer number (1-5): ");
    scanf("%d", &customer);

    if (customer >= 1 && customer <= 5)
    {
        p = p + customer - 1;

        printf("\nCurrent Balance: %d", *p);
        printf("\nMemory Address: %p", (void*)p);

        printf("\nEnter new balance: ");
        scanf("%d", &amount);

        *p = amount;

        printf("\nUpdated Balance: %d", *p);
    }
    else
    {
        printf("Invalid customer number");
    }

    return 0;
}
