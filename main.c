#include "Calculate.h"

int main() {
    while (1) {
        printf("\t\nOptions:\n");
        printf("\t1. Perform a calculation\n");
        printf("\t2. Perform a square calculation\n");
        printf("\t3. Display history\n");
        printf("\t4. Remove history\n");
        printf("\t5. Quit\n");
        printf("\t***************************\n");
        printf("Enter your choice (1/2/3/4/5): ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            printf("\t***************************\n");
            case 1:
                calculator();
                printf("\t***************************\n");
                break;
            case 2:
                square();
                break;
            case 3:
                displayHistory();
                break;
            case 4:
                removeHistoryFile();
                break;
            case 5:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

