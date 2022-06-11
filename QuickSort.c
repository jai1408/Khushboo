#include <stdio.h>

/* function to swap two numbers using pointers */
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void quickSort(int arr[], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;

        while (i < j)
        {
            while (arr[i] <= arr[pivot] && i < last)
                i++;
            while (arr[j] > arr[pivot])
                j--;
            if (i < j)
            {
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[pivot], &arr[j]);
        quickSort(arr, first, j - 1);
        quickSort(arr, j + 1, last);
    }
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
    printf("Please enter size of array: ");
    scanf("%d", &size);
    printf("Please enter elements: \n");
    // e.g. 46, 14, 25, 2, 22, 19, 89
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // calling function quickSort
    quickSort(arr, 0, size - 1);
    printf("Sorted array: \n");
    printArray(arr, size);
    return 0;
}
