#include "scanner.h"

void get_token(char c){

    if (!isspace(c)){
        if (c == ','){
            aux = 0;
            printf("\nSeparador: %c", c);
        }
        else {
            if (aux == 0){
                printf("\nCadena: ");
            }
            aux++;
            printf("%c", c);
        }
    } else {
        aux = 0;
    }
}