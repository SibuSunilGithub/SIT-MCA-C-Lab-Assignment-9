// Read and print one dimensional array of ten integer elements.

#include <stdio.h>
// User Defined Functions
void input_arr(int arr[], int size);
void print_arr(int arr[], int size);

// Main Function Start
int main()
{
    int i, arr[10]; // Array Initialization
    printf("Please Enter 10 Array Elements: ");
    // Calling Of Input Array Function
    input_arr(arr, 10);
    // Calling Of Print Array Function
    printf("Array Elements Are: ");
    print_arr(arr, 10);
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