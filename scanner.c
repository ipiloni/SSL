#include "scanner.h"

void get_token(char c){
    switch (c) {
        case SEP:
            printf("\nSeparador: ", c);
            break;
        case CAD:
            printf("\nCadena: ", c);
            break;
        case FDT:
            printf("\nFin de Texto.");
            break;
        default:
            printf("\nError");
            break;
    }
}
