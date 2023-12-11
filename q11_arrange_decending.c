// Arrange all the elements of an array in descending order.

#include <stdio.h>
// sort in decending order array function
void arr_sort_dec(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
// main Function
int main()
{
    int size;
    printf("Enter Size Of The Array: ");
    scanf("%d", &size);
    int arr[size];
    // Array elements input
    printf("Enter Array Elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Selection Sort Of Array Function Call...
    arr_sort_dec(arr, size);
    // Print The Sorted Array...
    printf("The Sorted Array Is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}