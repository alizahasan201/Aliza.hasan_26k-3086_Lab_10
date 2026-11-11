
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

int processTransaction(int balance, int amount, int (*p)(int, int))
{
    return p(balance, amount);
}

int main()
{
    int balance = 15000;
    int amount = 5000;

    balance = processTransaction(balance, amount, deposit);

    printf("Balance after Deposit: %d\n", balance);

    balance = processTransaction(balance, amount, withdraw);

    printf("Balance after Withdrawal: %d\n", balance);

    return 0;
}
