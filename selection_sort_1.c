#include <stdio.h>
#include <conio.h>

void selectionSort(int *, int);
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

    selectionSort(arr, size);

    printf("\n\n>>>>>>>> Elements After Sorting <<<<<<<<<\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}

void selectionSort(int *ptr, int size)
{
    int index_of_min;

    for (int i = 0; i < size - 1; i++)
    {
        index_of_min = i;

        for (int j = i + 1; j < size; j++)
        {
            if (ptr[j] < ptr[index_of_min])
                index_of_min = j;
        }

        swap(&ptr[i], &ptr[index_of_min]);
    }
}

void swap(int *num1, int *num2)
{

    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
