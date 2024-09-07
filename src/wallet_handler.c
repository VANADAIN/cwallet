#include <stdio.h>
#include <string.h>

void wallet_help() {
    printf("\n");
    printf("Available commands:\n");
    printf("help    | h         - Show this help message\n");
    printf("screate | sc        - Create a session-only wallet\n");
    printf("create  | c         - Create wallet and save it\n");
    printf("list    | l         - List all available wallets\n");
    // Add more commands here
    //
    printf("\n");
}

void WH_run(char *args[]) {
    printf("Wallet handler running...\n");
    char *action = args[0];

    const char *actions[] = {
        "help",
        "h",
        "list",
        "l",
        "create",
        "c",
        "screate",
        "sc",
    };
    int action_index = -1;
    const int NUM_ACTIONS = sizeof(actions) / sizeof(actions[0]);

    for (int i = 0; i < NUM_ACTIONS; i++) {
        if (strcmp(action, actions[i]) == 0) {
            action_index = i;
            break;
        }
    }

    switch (action_index) {
        case 0: wallet_help();    break;
        case 1: wallet_help();    break;
        // case 2: wallet_list();    break;
        // case 3: wallet_list();    break;
        // case 4: wallet_create();  break;
        // case 5: wallet_create();  break;
        // case 6: wallet_Screate(); break;
        // case 7: wallet_Screate(); break;
        default:
            printf("Invalid action: %s\n", action);
            break;
    }


    // TODO: Process the input
    //
}

