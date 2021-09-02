#include "scanner.h"

TOKEN token;

void get_token(char c){
    if (isalnum(c))
        printf("\nCadena: ", c);
    else if (ispunct(c))
        printf("\nSeparador: ", c);


/*    switch (c) {
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
*/
}
