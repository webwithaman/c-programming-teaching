#include <stdio.h>
#include <conio.h>

// void mergeSort(int *, int);
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

    // mergeSort(arr, size);

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
        mergeSort(ptr, beg, mid - 1);
        mergeSort(ptr, mid + 1, end);
        mergeArrays(ptr, beg, mid, end);
    }
}

void mergeArrays(int *arr, int beg, int mid, int end)
{
    int i = beg, j = mid + 1, copy[100], k = 0;

    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
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

    for (int i = beg; i < mid; i++)
        arr[i] = copy[i - beg];
}

void swap(int *num1, int *num2)
{

    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
