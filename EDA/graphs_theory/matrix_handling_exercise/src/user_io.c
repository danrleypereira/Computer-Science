#include <stdio.h>

int ask_user_for_integer(char *message)
{
    int number;
    printf("%s\n", message);
    scanf("%d", &number);
    if (number < 0)
    {
        printf("The number must be positive.\n");
        return ask_user_for_integer(message);
    }
    else if (getchar() != '\n')
    {
        printf("Invalid input.\n");
        while (getchar() != '\n')
            ;
        return ask_user_for_integer(message);
    }
    return number;
}

void ask_user_for_matrix_dimensions(int *dimensions)
{
    dimensions[0] = ask_user_for_integer("Enter the number of rows: ");
    dimensions[1] = ask_user_for_integer("Enter the number of columns: ");
}

int give_user_options()
{
    int option;
    printf("Choose an option:\n");
    printf("0 - Reset dimensions\n");
    printf("1 - Allocate matrix\n");
    printf("2 - Print matrix\n");
    printf("3 - Deallocate matrix\n");
    printf("4 - Reset matrix\n");
    printf("5 - Add value\n");
    printf("6 - Exit\n");
    scanf("%d", &option);
    // Clear the input buffer
    while (getchar() != '\n')
        ;
    // check if the option is valid
    if (option < 1 || option > 6)
    {
        printf("Invalid option.\n");
        return give_user_options();
    }
    return option;
}