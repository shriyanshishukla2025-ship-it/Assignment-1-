#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int maxCount=0,count,element;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        count=1;

        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }

        if(count>maxCount)
        {
            maxCount=count;
            element=arr[i];
        }
    }

    printf("Element = %d\n",element);
    printf("Frequency = %d",maxCount);

    return 0;
}