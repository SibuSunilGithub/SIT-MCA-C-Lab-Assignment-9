// Replace all even elements by 0 and odd by 1 in an array.

#include <stdio.h>
int main()
{
    // Array Initialization Assume Array Size - 10
    int i, arr[10];
    // Taking Array Input From User
    printf("Please Enter 10 Array Elements: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Before Replace Array Elements
    printf("Array Elements Before Replace Are: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // After Replace Array Elements (Even By - 0 & Odd By 1)
    printf("Array Elements After Replace Are: ");
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0) // Check Condition And Replace  With 0 & 1
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }

        printf("%d ", arr[i]);
    }

    return 0;
}