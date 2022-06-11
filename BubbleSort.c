#include <stdio.h>

/* function to swap two numbers using pointers */
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        // last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            // compare jth and j+1th index and swap
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

/* function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[100000];
    int i, size, x;
    printf("Please enter size of array ");
    scanf("%d", &size);
    printf("Please enter elements \n");
    // e.g. 46, 14, 25, 2, 22, 19, 89
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // calling function bubbleSort
    bubbleSort(arr, size);
    printf("Sorted array: \n");
    printArray(arr, size);
    return 0;
}