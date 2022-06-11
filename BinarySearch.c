#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x)
{
    while (left <= right)
    {
        // find middle index
        int mid = left + (right - left) / 2;

        // check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // if x greater, ignore left half else if x is smaller, ignore right half
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    // if we reach here, then element is not present
    return -1;
}

int main()
{
    int arr[100000];
    int i, size, x;
    printf("Please enter size of array ");
    scanf("%d", &size);
    printf("Please enter elements in ascending \n");
    // e.g. 1, 2, 3, 4, 5
    for (i = 0; i < size; i++)
    {
        scanf("%1d", &arr[i]);
    }
    printf("Please enter element to search ");
    scanf("%d", &x);
    // calling function binarySearch
    int result = binarySearch(arr, 0, size - 1, x);
    (result == -1) ? printf("Element is not present in array")
                   : printf("Element is present at index %d", result);
    return 0;
}
