#include <stdio.h>
int main()
{
    int n = 30, i, j;
    for (i = 2; i <= n; i++)
    {
        int c = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                c++;
        }
        if (c == 2)
            printf("%d ", i);
    }
    return 0;
}