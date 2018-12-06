#include <stdio.h>

int even_fib(int N)
{
    int sum = 0;
    int n1 = 1;
    int n2 = 2;
    int tot = 0;

    while (n1 < N)
    {
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
        if (sum % 2 == 0)
        {
            tot += sum;
        }
    }

    tot += 2;
    return tot;
}

int main(void)
{
    int sum = even_fib(4000000);
    printf("%d\n", sum);

    return 0;
}