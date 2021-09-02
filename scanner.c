#include "scanner.h"

void get_token(char c){

    if (!isspace(c)){
        if (c == ','){
            a = 0;
            printf("\nSeparador: %c", c);
        }
        else {
            if (a == 0){
                printf("\nCadena: ");
            }
            printf("%c", c);
            a++;
        }
    } else {
        a = 0;
    }
}