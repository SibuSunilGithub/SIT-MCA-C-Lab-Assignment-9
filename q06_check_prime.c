// Check and display all prime numbers in an array.

#include <stdio.h>
// User Defined Functions
void input_arr(int arr[], int size);
void print_arr(int arr[], int size);
int is_prime(int n);

// Main Function Start
int main()
{
    int check, i, arr[10]; // Array Initialization
    printf("Please Enter 10 Array Elements: ");
    // Calling Of Input Array Function
    input_arr(arr, 10);
    // check for prime or not
    printf("Prime numbers in the array: ");
    for (int i = 0; i < 10; i++)
    {
        if (is_prime(arr[i]))
        {
            printf("%d ", arr[i]);
        }
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
// check prime or not
int is_prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}