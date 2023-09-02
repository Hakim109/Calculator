#include "Calculate.h"
/*
Fonction performe to creat file.txt to keep history on it
*/

void history(char operation[1000]) {
    FILE *hptr = fopen("history.txt", "a+");
    fprintf(hptr, "%s\n", operation);
    fclose(hptr);
}
