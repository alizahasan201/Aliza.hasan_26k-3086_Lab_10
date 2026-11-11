
#include <stdio.h>

int deposit(int balance, int amount)
{
    return balance + amount;
}

int withdraw(int balance, int amount)
{
    if (amount > balance)
    {
        printf("Insufficient Balance\n");
        return balance;
    }
    else
    {
        return balance - amount;
    }
}

int main()
{
    int balance = 15000;
    int amount = 5000;

    int (*p)(int, int);

    p = deposit;

    balance = p(balance, amount);
    printf("Balance after Deposit: %d\n", balance);

    p = withdraw;

    balance = p(balance, amount);
    printf("Balance after Withdrawal: %d\n", balance);

    return 0;
}
