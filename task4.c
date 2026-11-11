
#include <stdio.h>

int calculateTotal(int *p, int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total = total + *(p + i);
    }

    return total;
}

int main()
{
    int branch1[3] = {15000, 23000, 32000};
    int branch2[4] = {12000, 21000, 27000, 35000};

    int total1, total2;

    total1 = calculateTotal(branch1, 3);
    total2 = calculateTotal(branch2, 4);

    printf("Branch 1 Total: %d\n", total1);
    printf("Branch 2 Total: %d\n", total2);

    return 0;
}
