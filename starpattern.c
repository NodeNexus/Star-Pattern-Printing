#include <stdio.h>
void main()
{
    int i, j, k, rows;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);
    for (i = 0; i <= rows; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (k = rows - i; k > 0; k--)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
