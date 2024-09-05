#include <stdio.h>
#include <string.h>
#include "cli.h"

#define MAX_INPUT_SIZE 1024
#define VERSION "0.1.0"

int main() {
    char input[MAX_INPUT_SIZE];

    printf("C wallet v%s\n", VERSION);
    printf("Type 'help' for a list of commands.\n\n");

    while (1) {
        printf("> ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break; // Handle EOF
        }

        // Remove newline character from the input
        input[strcspn(input, "\n")] = 0;

        printf("Input before processing: %s\n", input);

        // Process the command
        process_command(input);
    }

    return 0;
}

