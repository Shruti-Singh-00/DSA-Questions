#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter no. of rows: ");
    scanf("%d",&m);
    printf("Enter no. of columns: ");
    scanf("%d",&n);

    int sparseMatrix[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&sparseMatrix[i][j]);
        }
    }

    int size = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (sparseMatrix[i][j] != 0)
            {
                size++;
            }
        }
    }

    int compactMatrix[3][size];

    int k = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            if (sparseMatrix[i][j] != 0)
            {
                compactMatrix[0][k] = i;
                compactMatrix[1][k] = j;
                compactMatrix[2][k] = sparseMatrix[i][j];
                k++;
            }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
            printf("%d ", compactMatrix[i][j]);

        printf("\n");
    }
    return 0;
}