#ifndef CALCULATE_H_INCLUDED
#define CALCULATE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX_HISTORY_SIZE 10

typedef struct {
    char operator;
    float firstNum;
    float secondNum;
    float result;
    long long int fact;
} Calculation;

char* decimalToBinary(int decimal);
void history(char operation[1000]);
void removeHistoryFile();
float min(float fst, float scn);
void calculator();
void displayHistory();
void square();
long long factorial(int n);

#endif // CALCULATE_H_INCLUDED
