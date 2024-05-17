#include "matrix.h"
#include "user_io.h"
#include <stdio.h>
#include <stdlib.h>

// extern int **MATRIX;

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        printf("Two integer arguments are required.\n");
        return 1;
    }
    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);
    // end of the program if the user does not provide valid arguments
    if (rows <= 0 || cols <= 0)
    {
        printf("The arguments must be positive integers.\n");
        return 1;
    }
    // save the matrix dimensions in a local variable
    int dimensions[2] = {rows, cols};
    int option; // control variable for do-while loop
    // we are not using break statements in the switch-case
    // because the break statement would not end the do-while loop
    // the break statement would only end the switch-case
    // we are using continue statements to skip the rest of the loop
    do
    {
        option = give_user_options();
        switch (option)
        {
        case 0:
            ask_user_for_matrix_dimensions(dimensions);
            break;
        case 1:
            // ask user if they want to allocate a new matrix with random values, with 0
            // or with a specific value
            char *message = "Choose an option:\n1 - Random values\n2 - 0\n3 - Specific values";
            int option = ask_user_for_integer(message);
            MATRIX = allocate_matrix(rows, cols);
            if (option == 1)
            {
                MATRIX = randomly_fill_out_matrix(rows, cols);
            }
            else if (option == 3)
            {
                MATRIX = ask_user_for_each_element(rows, cols);
            }
            break;
        case 2:
            // TODO: print diagonal elements with XX
            print_matrix(MATRIX, rows, cols);
            break;
        case 3:
            deallocate_matrix(MATRIX, rows);
            break;
        case 4:
            reset_matrix(MATRIX, rows, cols);
            break;
        case 5:
            // just one dimension because the matrix is square
            int row = ask_user_for_integer("Enter row: ");
            int col = ask_user_for_integer("Enter column: ");
            int value = ask_user_for_integer("Enter the value: ");
            // what if user insert a value in the diagonal?
            // what if user insert a value out of the matrix?
            add_value(MATRIX, row, col, value);
            break;
        case 6:
            // we need to use continue, because break would only end the switch-case
            continue;

        default:
            continue;
        }

        // every time the user chooses an option, we print the matrix
        print_matrix(MATRIX, rows, cols);
    } while (option != 6); // stop condition

    // Deallocate memory before finishing the program
    deallocate_matrix(MATRIX, rows);
    return 0;
}

// void initializeMatrix(int rows, int columns)
// {
//     int **matrix = malloc(rows * sizeof(int *)); // Aloca um array de ponteiros
//     for (int i = 0; i < rows; i++)
//     {
//         matrix[i] = malloc(columns * sizeof(int)); // Aloca um array para cada linha
//         for (int j = 0; j < columns; j++)
//         {
//             matrix[i][j] = i + j;
//             printf("matrix[%d][%d] = %d, address = %p\n", i, j, *(*(matrix + i) + j), (void *)&matrix[i][j]);
//         }
//     }

//     *(*(matrix + 1) + 2) = 88; // Equivalent to matrix[1][2] = 88;
//     printf("%d\n", *(*(matrix)));
//     printf("nutela %i\n", *(*(matrix + 1) + 2));
//     printf("root %i\n", *(matrix + (1 * columns + 2)));

//     // Liberando memória
//     for (int i = 0; i < rows; i++)
//     {
//         free(matrix[i]);
//     }
//     free(matrix);
// }