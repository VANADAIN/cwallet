#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// handlers
#include "help_handler.h"
#include "wallet_handler.h"

#define NUM_COMMANDS 4

void process_command(char *input) {
    // take first word as command
    char *command = strtok(input, " ");

    // Array to store up to 3 arguments
    char *arguments[3];
    int arg_count = 0;

    // Tokenize the rest of the input as arguments
    char *arg = strtok(NULL, " ");
    while (arg != NULL) {
        if (arg_count < 3) {
            arguments[arg_count++] = arg;
        } else {
            printf("Error: More than 3 arguments provided.\n");
            return;
        }
        arg = strtok(NULL, " ");
    }

    // Print command and arguments
    printf("Command: %s\n", command);
    printf("Arg count: %d\n", arg_count);
    printf("Arguments:");
    for (int i = 0; i < arg_count; i++) {
        printf(" %s", arguments[i]);
    }
    printf("\n");
        
    const char *commands[NUM_COMMANDS] = {
        "help", 
        "exit",
        "ex",
        "wallet"
    };
    int command_index = -1;

    for (int i = 0; i < NUM_COMMANDS; i++) {
        if (strcmp(input, commands[i]) == 0) {
            command_index = i;
            break;
        }
    }

    // printf("Command index: %d\n", command_index);

    switch (command_index) {
        case 0:
            help();
            break;
        case 1:
            printf("Exiting...\n");
            exit(0);
            break;
        case 2:
            printf("Exiting...\n");
            exit(0);
            break;
        case 3:
            WH_run(arguments, arg_count);
            break;
        default:
            printf("Unknown command: %s\n", input);
            break;
    }
}
