#include <stdio.h>

int main()
{
    int a[10][10];
    int row, col, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &row, &col);

    printf("Enter matrix elements:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose Matrix:\n");

    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}