#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice, i;

    printf("Enter a string: ");
    gets(str);

    printf("\n1. String Length");
    printf("\n2. Reverse String");
    printf("\n3. Uppercase");

    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length = %d", strlen(str));
            break;

        case 2:
            strrev(str);
            printf("Reverse = %s", str);
            break;

        case 3:
            for(i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }

            printf("Uppercase = %s", str);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}