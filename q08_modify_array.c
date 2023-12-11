// Update a particular location of an array with a given value...

#include <stdio.h>
// User Defined Functions
void input_arr(int arr[], int size);
void print_arr(int arr[], int size);

// Main Function Start
int main()
{
    int pos, value, i, arr[10]; // Array Initialization
    printf("Please Enter 10 Array Elements: ");
    // Calling Of Input Array Function
    input_arr(arr, 10);
    printf("Enter The Index Position And Update Element:");
    scanf("%d%d", &pos, &value);
    for (i = 0; i < 10; i++)
    {
        if (i == pos)
        {
            arr[i] = value;
        }
    }
    // print arr func call
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