#include <stdio.h>

int main()
{
    int start, end, i, temp, digit, sum;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++)
    {
        temp = i;
        sum = 0;

        while(temp != 0)
        {
            digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }

        if(sum == i)
            printf("%d ", i);
    }

    return 0;
}