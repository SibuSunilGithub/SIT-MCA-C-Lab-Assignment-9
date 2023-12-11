// WAP To Reverse The Elements Of An Array...

#include <stdio.h>
// Reverse array user defined function...
void rev_arr(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        // Swap array elements...
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
// Start Main Function...
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
    // rev arr func calling...
    rev_arr(arr, size);

    // Print Reversed Array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}