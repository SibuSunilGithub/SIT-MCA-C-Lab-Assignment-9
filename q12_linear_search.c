// Search an element from an array using linear search technique...

#include <stdio.h>
// User Defined Functions
void input_arr(int arr[], int size);
int linear_search(int arr[], int size, int key);

int main()
{
    int i, find, key, arr[10]; // Array Initialization
    printf("Please Enter 10 Array Elements: ");
    // Calling Of Input Array Function
    input_arr(arr, 10);
    printf("Enter The Element You Want To Search: ");
    scanf("%d", &key);
    // Calling linear Search array function...
    find = linear_search(arr, 10, key);

    if (find)
    {
        printf("The element is present in the %d index.",find);
    }
    else
    {
        printf("The Element Is Not Present In The Array!");
    }
    return 0;
}
// input arr function...
void input_arr(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
// Linear Search functiion...
int linear_search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return 0;
}