// C proram to print following Pattern

/*

Pattern 06.

    *********
     *******
      *****
       ***
        *

*/

// Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Main Function Start
int main()
{
    int rows, cols;
    printf("\nHow Many Rows => ");
    scanf("%d", &rows);

    // Handling Invalid Input
    if (rows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // Determine Number of Columns According to Rows
    cols = rows * 2 - 1;
    puts("\n--------------------------------------------\n");

    // // Print Pattern

    // // 1st Approach
    for (int i = 1; i <= rows; i++)
    {
        for (int space = 1; space <= i - 1; space++)
            printf(" ");

        for (int j = 1; j <= cols - (i - 1) * 2; j++)
            printf("*");

        printf("\n");
    }

    // // 2nd Approach
    // for (int i = 1; i <= rows; i++)
    // {
    //     for (int j = 1; j <= cols; j++)
    //     {
    //         if (j >= i && j <= cols + 1 - i)
    //             printf("*");
    //         else
    //             printf(" ");
    //     }

    //     printf("\n");
    // }

    printf("\n");
    getch();
    return 0;
}