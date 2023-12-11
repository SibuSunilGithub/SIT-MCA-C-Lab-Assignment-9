// Count the odd, even, positive, and negative numbers present in an array.

#include <stdio.h>
// User Defined Functions
void input_arr(int arr[], int size);

// Main Function Start
int main()
{
    int i, even = 0, odd = 0, pos = 0, neg = 0, arr[10]; // Array Initialization Assume Array Size - 10

    printf("Please Enter 10 Array Elements: ");
    // Calling Of Input Array Function
    input_arr(arr, 10);

    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
        if (arr[i] >= 0)
            pos++;
        else
            neg++;
    }
    printf("Even Numbers = %d\n", even);
    printf("Odd Numbers = %d\n", odd);
    printf("Positive Numbers = %d\n", pos);
    printf("Negative Numbers = %d\n", neg);
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
