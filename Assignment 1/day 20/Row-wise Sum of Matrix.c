#include <stdio.h>

int main()
{
    int a[10][10];
    int row, col, i, j, sum;

    printf("Enter rows and columns: ");
    scanf("%d%d", &row, &col);

    printf("Enter matrix elements:\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Row-wise Sum:\n");

    for(i=0;i<row;i++)
    {
        sum=0;

        for(j=0;j<col;j++)
        {
            sum=sum+a[i][j];
        }

        printf("Row %d = %d\n",i+1,sum);
    }

    return 0;
}