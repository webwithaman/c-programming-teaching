#include <stdio.h>
#include <conio.h>

void mergeSort(int *, int, int);
void mergeArrays(int *, int, int, int);
void swap(int *, int *);

int main()
{
    int size;
    printf("\nHow Many Elements You Want to Enter => ");
    scanf("%d", &size);

    int arr[size];

    printf("\nEnter %d Elements => ", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("\n>>>>>>>> Elements Before Sorting <<<<<<<<<\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    mergeSort(arr, 0, size - 1);

    printf("\n\n>>>>>>>> Elements After Sorting <<<<<<<<<\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}

void mergeSort(int *ptr, int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergeSort(ptr, beg, mid);
        mergeSort(ptr, mid + 1, end);
        mergeArrays(ptr, beg, mid, end);
    }
}

void mergeArrays(int *arr, int beg, int mid, int end)
{
    int i = beg, j = mid + 1, k = 0;

    int *copy = (int *)malloc((end - beg + 1) * sizeof(int));

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
            copy[k++] = arr[i++];
        else
            copy[k++] = arr[j++];
    }

    while (i <= mid)
    {
        copy[k++] = arr[i++];
    }

    while (j <= end)
    {
        copy[k++] = arr[j++];
    }

    for (int i = 0; i < k; i++)
    {
        arr[beg + i] = copy[i];
    }

    free(copy);
}
