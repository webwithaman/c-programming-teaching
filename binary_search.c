#include <stdio.h>
#include <conio.h>

int binarySearch(int *, int, int);

int main()
{

    int arr[7] = {4, 66, 222, 999, 1000, 2045, 4000}, search = 9000, index;
    int size = 7;

    index = binarySearch(arr, size, search);

    if (index != -1)
        printf("\nElement Found At Index %d", index);
    else
        printf("\nElement Not Found");

    return 0;
}

int binarySearch(int *ptr, int size, int search)
{
    int beg = 0, end = size - 1, mid;

    while (beg <= end)
    {
        mid = (beg + end) / 2;

        if (ptr[mid] == search)
            return mid;
        else if (search < ptr[mid])
            end = mid - 1;
        else
            beg = mid + 1;
    }

    return -1;
}
