#include <stdio.h>

int main()
{
    int x, n, i;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &x);

    printf("Enter power: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        result = result * x;
    }

    printf("Answer = %lld", result);

    return 0;
}