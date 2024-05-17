#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <adjacency_matrix>\n", argv[0]);
        return 1;
    }

    // Placeholder for converting the input string to an actual adjacency matrix
    // This is where you would call the function defined in graphs.h
    // For now, just print the received matrix
    printf("Received adjacency matrix: %s\n", argv[1]);

    // Example of how you might begin to parse the matrix
    // char* matrix_str = strdup(argv[1]);  // Duplicate the string to work with it
    // TODO: Split and convert to numerical matrix

    return 0;
}
