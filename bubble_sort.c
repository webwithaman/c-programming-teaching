#include <stdio.h>
#include <conio.h>

void bubbleSort(int *, int);
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

    bubbleSort(arr, size);

    printf("\n\n>>>>>>>> Elements After Sorting <<<<<<<<<\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}

void bubbleSort(int *ptr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (ptr[j] > ptr[j + 1])
                swap(&ptr[j], &ptr[j + 1]);
        }
    }
}

void swap(int *num1, int *num2)
{

    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
