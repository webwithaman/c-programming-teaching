#include <stdio.h>
#include <malloc.h>

int main()
{

    int x;

    int *ptr = malloc(4);

    printf("\n%d\n", *ptr);
}