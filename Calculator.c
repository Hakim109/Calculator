#include "Calculate.h"

//standar calculation

void calculator() {
    char operator;
    float firstNum, secondNum;
    printf("\nType the first number: ");
    scanf("%f", &firstNum);
    printf("Type the second number: ");
    scanf("%f", &secondNum);
    printf("Choose operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    float result;

    switch (operator) {
        case '+':
            result = firstNum + secondNum;
            break;
        case '-':
            result = firstNum - secondNum;
            break;
        case '*':
            result = firstNum * secondNum;
            break;
        case '/':
            if (secondNum == 0) {
                printf("Error: Cannot divide by zero.\n");
                return;
            }
            result = firstNum / secondNum;
            break;
        case '%':
            result = (int)firstNum % (int)secondNum;
            break;
        default:
            printf("Invalid operator. Try Again.\n");
            return;
    }

    printf("%.1f %c %.1f = %.1f\n", firstNum, operator, secondNum, result);
    printf("Binary result: %s\n", decimalToBinary((int)result));
    printf("if you want to leave, press Ctrl + C\n");

    char operation[1000]; //redirect output from printif to buffer (operationà);
    snprintf(operation, sizeof(operation), "%.1f %c %.1f = %.1f", firstNum, operator, secondNum, result);
    history(operation);
}
