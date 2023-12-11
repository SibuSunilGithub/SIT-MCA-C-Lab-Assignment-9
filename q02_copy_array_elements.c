//  Copy all elements of an array into another array...

#include <stdio.h>
int main()
{
    // array initialization Assuming Array Size - 5
    int i, arr1[5], arr2[5];

    // Taking First Array Input
    printf("Please Enter 5 Array Elements: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }
    // Printing first array elements
    printf("Your Array Is: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    // Copy and print array elements of arr1 to arr2
    printf("Copied Array Elements Is: ");
    for (i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
        printf("%d ", arr2[i]);
    }
    return 0;
}