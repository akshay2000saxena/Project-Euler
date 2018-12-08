#include <stdio.h>

int pyt(int a, int b, int c)
{
    if (a * a + b * b == c * c)
    {
        return 1;
    }
    else
        return 0;
}

int check(int n)
{
    int product = 0;
    for (int i = n / 2; i > 1; i--)
    {
        for (int j = n / 2; j > 1; j--)
        {
            int k = 0;
            k = n - i - j;
            if (pyt(i, j, k) == 1 && i + j + k == n)
            {
                product = i * j * k;
            }
        }
    }
    return product;
}

int main(void)
{
    printf("Product: %d", check(1000));
    return 0;
}