#include <stdio.h>
#include <conio.h>

void selectionSort(int *, int);
void swap(int *, int *);
int indexOfSmallest(int *, int, int);

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

    selectionSort(arr, size);

    printf("\n\n>>>>>>>> Elements After Sorting <<<<<<<<<\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}

void selectionSort(int *ptr, int size)
{
    for (int i = 0; i < size - 1; i++)
        swap(&ptr[i], &ptr[indexOfSmallest(ptr, size, i)]);
}

void swap(int *num1, int *num2)
{

    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int indexOfSmallest(int *ptr, int size, int startIndex)
{
    int index_of_small = startIndex;

    for (int i = startIndex; i < size; i++)
    {
        if (ptr[i] < ptr[index_of_small])
            index_of_small = i;
    }

    return index_of_small;
}
