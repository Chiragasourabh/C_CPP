#include <stdio.h>

void main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n + (n - 1); i++)
    {
        int value = n;
        int dedr = (n - 1) - abs(n - 1 - i);
        int incr = 2 * (n - 1) - dedr;
        for (int j = 0; j < n + (n - 1); j++)
        {
            printf("%d ", value);
            if (dedr > 0)
            {
                value--;
                dedr--;
            }
            if (j >= incr)
            {
                value++;
                incr++;
            }
        }
        printf("\n");
    }
}