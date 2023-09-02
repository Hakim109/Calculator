#include "Calculate.h"
//display history from file
void displayHistory() {
    FILE *hptr = fopen("history.txt", "r");
    if (hptr == NULL) {
        printf("History is empty.\n");
        return;
    }

    printf("Calculation History:\n");
    char line[1000];
    while (fgets(line, sizeof(line), hptr) != NULL) {
        printf("%s", line);
    }

    fclose(hptr);
}
