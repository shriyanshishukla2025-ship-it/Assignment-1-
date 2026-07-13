#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int choice, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\n1. Display Array");
    printf("\n2. Sum of Elements");
    printf("\n3. Largest Element");

    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Array Elements:\n");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += arr[i];

            printf("Sum = %d", sum);
            break;

        case 3:
        {
            int max = arr[0];

            for(i = 1; i < n; i++)
            {
                if(arr[i] > max)
                    max = arr[i];
            }

            printf("Largest = %d", max);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}