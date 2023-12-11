// Add and subtract two 1 D array elements...

#include <stdio.h>
// User Defined Functions
void input_arr(int arr[], int size);
void print_arr(int arr[], int size);

// Main Function Start
int main()
{
    int size,i, arr1[21], arr2[21], arr3[21]; // Array Initialization

    printf("Enter Size Of The Arrays: ");
    scanf("%d", &size);

    printf("Please Enter First Array Elements: ");
    // Calling Of Input Array Function
    input_arr(arr1, size);
    printf("Please Enter Second Array Elements: ");
    // Calling Of Input Array Function
    input_arr(arr2, size);

    // Addition Of Two Array Elements
    printf("Addition Is: ");
    for (int i = 0; i < size; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
        printf("%d ",arr3[i]);
    }
printf("\n");
    // Subtraction Of Two Array Elements
    printf("Subtraction Is: ");
    for (int i = 0; i < size; i++)
    {
        arr3[i] = arr1[i] - arr2[i];
        printf("%d ",arr3[i]);
    }
    return 0;
}

// Functions Definations
// Input Array
void input_arr(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
// Print Array
void print_arr(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
