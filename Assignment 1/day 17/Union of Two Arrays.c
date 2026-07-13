#include <stdio.h>

int main()
{
    int a[100], b[100], unionArray[200];
    int n1, n2, i, j, k = 0, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array elements:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n1; i++)
        unionArray[k++] = a[i];

    for(i = 0; i < n2; i++)
    {
        found = 0;

        for(j = 0; j < k; j++)
        {
            if(b[i] == unionArray[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            unionArray[k++] = b[i];
        }
    }

    printf("Union of Arrays:\n");

    for(i = 0; i < k; i++)
    {
        printf("%d ", unionArray[i]);
    }

    return 0;
}