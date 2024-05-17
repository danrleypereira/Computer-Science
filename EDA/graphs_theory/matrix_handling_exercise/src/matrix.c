#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>
#include "user_io.h"

int **MATRIX;

int **allocate_matrix(int rows, int cols)
{
    // malloc does not empty the memory, it just allocates it
    // calloc fills the memory with 0
    // pointers of pointers because the rows are pointers to vectors (columns - the columns have the values)
    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (!matrix)
    {
        fprintf(stderr, "Memory allocation failed for matrix rows.\n");
        return NULL;
    }
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int *)calloc(cols, sizeof(int));
        if (!matrix[i])
        {
            fprintf(stderr, "Memory allocation failed for matrix row %d.\n", i);
            // Cleanup already allocated rows
            for (int j = 0; j < i; j++)
            {
                free(matrix[j]);
            }
            free(matrix);
            return NULL;
        }
    }
    return matrix;
}

void print_matrix(int **matrix, int rows, int cols)
{
    if (!matrix)
    {
        fprintf(stderr, "Matrix is NULL.\n");
        return;
    }
    printf("Matrix[%d][%d]:\n", rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void deallocate_matrix(int **matrix, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}

void reset_matrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = 0;
        }
    }
}

void add_value(int **matrix, int row, int col, int value)
{
    if (row == col)
    {
        fprintf(stderr, "You can't change the value of a diagonal element.\n");
        return;
    }
    matrix[row][col] = value;
}

int **randomly_fill_out_matrix(int rows, int cols)
{
    int **matrix = allocate_matrix(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                *(*(matrix + i) + j) = 0;
                continue;
            }
            *(*(matrix + i) + j) = rand() % 100;
        }
    }
    return matrix;
}

int **ask_user_for_each_element(int rows, int cols)
{
    int **matrix = allocate_matrix(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            char prompt[50];
            sprintf(prompt, "Enter the value [%d][%d]: ", i, j);
            if (i == j) // diagonal elements
            {
                *(*(matrix + i) + j) = 0;
                continue;
            }
            // get the address of row i and add j to get the address of the element
            // the same as matrix[i][j]
            *(*(matrix + i) + j) = ask_user_for_integer(prompt);
        }
    }
    return matrix;
}