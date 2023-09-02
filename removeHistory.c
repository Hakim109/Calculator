#include "Calculate.h"


//Fonction to remove history file

void removeHistoryFile() {
    remove("history.txt");
    printf("History file removed.\n");
}

float min(float fst, float scn) {
    return fst < scn ? fst : scn;
}
