#include <stdio.h>
int main()
{
    int Matrix_1_rows, Matrix_1_column, Matrix_2_rows, Matrix_2_column;

    printf("Enter No of Rows and Column for Matrix 1\n");
    scanf("%d %d", &Matrix_1_rows, &Matrix_1_column);
    printf("Enter No of Rows and Column for Matrix 2\n");
    scanf("%d %d", &Matrix_2_rows, &Matrix_2_column);

    int Matrix_1[Matrix_1_rows][Matrix_1_column];
    int Matrix_2[Matrix_2_rows][Matrix_2_column];
    int Result_Matrix[Matrix_1_rows][Matrix_2_column];

    if (Matrix_1_column == Matrix_2_rows)
    {
        // Input elements for Matrix 1
        printf("\nInput elements for Matrix 1\n");
        for (int i = 0; i < Matrix_1_rows; i++)
        {
            for (int j = 0; j < Matrix_1_column; j++)
            {
                printf("Enter A%d%d element for Matrix 1: ", i + 1, j + 1);
                scanf("%d", &Matrix_1[i][j]);
            }
        }
        printf("\n");
        // Input elements for Matrix 2
        printf("\nInput elements for Matrix 2\n");
        for (int i = 0; i < Matrix_2_rows; i++)
        {
            for (int j = 0; j < Matrix_2_column; j++)
            {
                printf("Enter A%d%d element for Matrix 2: ", i + 1, j + 1);
                scanf("%d", &Matrix_2[i][j]);
            }
        }

        // Initialise the Result Matrix
        for (int i = 0; i < Matrix_1_rows; i++)
        {
            for (int j = 0; j < Matrix_2_column; j++)
            {
                Result_Matrix[i][j] = 0;
            }
        }

        // Multiplication of two matrices
        for (int i = 0; i < Matrix_1_rows; i++)
        {
            for (int j = 0; j < Matrix_2_column; j++)
            {
                for (int k = 0; k < Matrix_1_column; k++)
                {
                    Result_Matrix[i][j] += Matrix_1[i][k] * Matrix_2[k][j];
                }
            }
        }

        // Print the Result
        printf("\nResult Matrix:\n");
        for (int i = 0; i < Matrix_1_rows; i++)
        {
            for (int j = 0; j < Matrix_2_column; j++)
            {
                printf("%d ", Result_Matrix[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication can't be done for these two Matrices.\nBecause No of Columns of Matrix 1 should be equal to No of Rows  of Matrix 2");
    }

    return 0;
}
