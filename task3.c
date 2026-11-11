
#include <stdio.h>

int main()
{
    int branch1[3] = {15000, 23000, 32000};
    int branch2[4] = {12000, 21000, 27000, 35000};

    int *p[2] = {branch1, branch2};
    int size[2] = {3, 4};
    int total;

    for (int i = 0; i < 2; i++)
    {
        total = 0;

        printf("\nBranch %d\n", i + 1);

        for (int j = 0; j < size[i]; j++)
        {
            printf("Balance: %d\n", p[i][j]);
            printf("Address: %p\n", (void*)&p[i][j]);

            total = total + p[i][j];
        }

        printf("Total Balance: %d\n", total);
    }

    return 0;
}
