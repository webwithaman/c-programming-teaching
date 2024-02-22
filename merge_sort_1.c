#include <stdio.h>
#include <conio.h>

void mergeSort(int *, int, int);
void mergeArrays(int *, int, int, int);

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

    int size1 = mid - beg + 1, size2 = end - mid, k = beg, i = 0, j = 0;

    int arr1[size1], arr2[size2];

    for (int i = 0; i < size1; i++)
        arr1[i] = arr[beg + i];

    for (int i = 0; i < size2; i++)
        arr2[i] = arr[mid + 1 + i];

    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
            arr[k++] = arr1[i++];
        else
            arr[k++] = arr2[j++];
    }

    while (i < size1)
    {
        arr[k++] = arr1[i++];
    }

    while (j < size2)
    {
        arr[k++] = arr2[j++];
    }
}
