#include "Calculate.h"

void square()
{
    double deltaX;

    printf( "\nType the first number to calculate square: " );
    scanf( "%lf", &deltaX );

    long int square = pow(deltaX, 2);

    printf( "the square for %5.2lf : %ld\n", deltaX, square);

    //put squar in history
     char operation[1000]; //redirect output from printif to buffer (operationà);
    snprintf(operation, sizeof(operation), "%.2f = %ld", deltaX, square);
    history(operation);

}
