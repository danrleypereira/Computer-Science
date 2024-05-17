#ifndef MATRIX_H
#define MATRIX_H

// we are using a global variable to store the matrix
// because we are going to use the same matrix in all functions
// the extern keyword is used to tell the compiler that the variable is declared elsewhere
extern int **MATRIX;

// dynamic memory allocation of a matrix
int **allocate_matrix(int rows, int cols);

// print matrix
void print_matrix(int **matrix, int rows, int cols);

// deallocate memory of a matrix
void deallocate_matrix(int **matrix, int rows);

// fill out matrix with 0
void reset_matrix(int **matrix, int rows, int cols);

// add value in a element of a matrix
void add_value(int **matrix, int row, int col, int value);

// fill out matrix with random values
int **randomly_fill_out_matrix(int rows, int cols);

int **ask_user_for_each_element(int rows, int cols);

#endif