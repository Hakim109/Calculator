#include "Calculate.h"

int main() {
    while (1) {
        printf("\nOptions:\n");
        printf("1. Perform a calculation\n");
        printf("2. Display history\n");
        printf("3. Remove history\n");
        printf("4. Quit\n");
        printf("Enter your choice (1/2/3/4): ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                calculator();
                break;
            case 2:
                displayHistory();
                break;
            case 3:
                removeHistoryFile();
                break;
            case 4:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

