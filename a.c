#include <stdio.h>
#include <string.h>

int main()
{

    char src[] = "aman";
    char des[6] = "kam";

    strncpy(des, src, 8);

    printf("\n%s",des);
    printf("\n%c",des[3]);
}