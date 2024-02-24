#include <stdio.h>

void s(const char *m)
{
    // m[0] = 65;
}

int main()
{

    char p[] = "aman";

    s(p);

    printf("\n%c\nend", p[0]);

    return 0;
}