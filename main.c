#include <stdio.h>
#include "scanner.h"

TOKEN c;

int main(){
    do{
        c = get_token();
        switch (c){
            case SEP:
            printf("Separador\n", c);
            break;
            
            case CAD:
            printf("Cadena\n", c);
            break;
            }
    } while(c != FDT);
    printf("Fin de Texto\n", c);
    return 0;
}