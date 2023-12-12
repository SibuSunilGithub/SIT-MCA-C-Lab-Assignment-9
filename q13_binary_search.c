// Search an element from an array using binary search method Using User Defined Functions.(User Can Enter Any Order The Elements)

#include <stdio.h>
// user defined functions initializations...
void input_arr(int arr[], int size);
void arr_sort_asc(int arr[], int size);
int binary_search(int arr[], int size, int key);

// main function...

int main()
{
    int arr[100], find, size, key;
    printf("Enter The Size Of The Array: ");
    scanf("%d", &size);

    printf("Enter The Array Elements: ");
    input_arr(arr, size);

    printf("Enter The Element You Want To Search: ");
    scanf("%d", &key);

    arr_sort_asc(arr, size);
    find = binary_search(arr, size, key);
    if (find)
    {
        printf("The element is present in the %d index.", find);
    }
    else
    {
        printf("The Element Is Not Present In The Array!");
    }
    return 0;
}

// ************ User defined functions definations *********
// Input Array Function
void input_arr(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// sort in decending order array function
void arr_sort_asc(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Binary Search Array Function...

int binary_search(int arr[], int size, int key)
{
    int mid, low, high;
    low = 0;
    high = size;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}