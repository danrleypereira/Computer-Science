/*
    Danrley
    2355147-0
*/
#include <stdio.h>
#include <stdlib.h>
  
int main()
{
  
    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n, i;
    float averageGrade = 0;
  
    // Get the number of elements for the array
    printf("Quantas notas serão inseridas? \n");
    scanf("%d", &n);
    printf("O número de notas a serem inseridas é: %d\n", n);
  
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));
  
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
  
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
  
        // save grades in the elements of the array
        for (i = 0; i < n; ++i) {
            printf("Nota %d = ", (i+1));
            scanf("%d", &ptr[i]);
        }
  
        // Print the elements of the array
        printf("The average grade is: ");
        for (i = 0; i < n; ++i) {
            averageGrade += ptr[i];
        }
        printf("%.2f\n", (averageGrade/n));
    }


    // Free the memory
    free(ptr);
    printf("Calloc Memory successfully freed.\n");
  
    return 0;
}