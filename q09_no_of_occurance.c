// Count the number of occurrences of an element in a single dimensional array.

#include <stdio.h>
int main()
{
    int i, size, num, count = 0;
    printf("Enter Size Of The Array: ");
    scanf("%d", &size);
    int arr[size];
    // Array elements input taking from user
    printf("Enter Array Elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to count the occurences: ");
    scanf("%d", &num);
    for (i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            count++;
        }
    }
    printf("%d Occures %d Times.\n", num, count);
    return 0;
}