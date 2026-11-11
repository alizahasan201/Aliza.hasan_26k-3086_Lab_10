
#include <stdio.h>

int main()
{
    int transactions[2][3] = {
        {120000, 150000, 180000},
        {200000, 170000, 220000}
    };

    int (*p)[3] = transactions;
    int total;

    for (int i = 0; i < 2; i++)
    {
        total = 0;

        printf("\nBranch %d", i + 1);
        printf("\nRow Address: %p\n", (void*)(p + i));

        for (int j = 0; j < 3; j++)
        {
            printf("Month %d: %d\n", j + 1, (*(p + i))[j]);

            total = total + (*(p + i))[j];
        }

        printf("Total Transactions: %d\n", total);
    }

    return 0;
}
