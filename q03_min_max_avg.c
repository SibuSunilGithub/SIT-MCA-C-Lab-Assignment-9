//  Find the minimum, maximum and average of five elements present in an array...

#include <stdio.h>

// Function Initialization
int min_arr(int arr[], int size);
int max_arr(int arr[], int size);
float avg_arr(int arr[], int size);

int main()
{
    //  Variable & Array Initialization Assume Size 10
    int i, arr[10];

    // Taking Array Input
    printf("Please Enter 5 Array Elements: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // min_array function call
    printf("Minimum Element In Array Is: %d\n", min_arr(arr, 5));

    // max_array function call
    printf("Maximum Element In Array Is: %d\n", max_arr(arr, 5));

    // Average Of Array Function Call
    printf("Average Of Array Elements Is: %.1f\n", avg_arr(arr, 5));
    return 0;
}

// Minimum Of Array Element Function
int min_arr(int arr[], int size)
{
    int i, min = arr[0];
    for (i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

// Maximum Of Array Element Function
int max_arr(int arr[], int size)
{
    int i, max = arr[0];
    for (i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

// Average Of Array Function
float avg_arr(int arr[], int size)
{
    int i, sum = 0;
    float avg;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (sum / size);
}
