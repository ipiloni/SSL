#include <stdio.h>
#include "scanner.h"

int finDeTexto = 0, separador = 0, cadena = 0;
TOKEN c;

int main(){
    do{
        c = get_token();
        switch (c){
            case SEP:
            printf("Separador\n", c);
            separador++;
            break;
            
            case CAD:
            printf("Cadena\n", c);
            cadena++;
            break;
            }
    } while(c != FDT);
    printf("Fin de Texto\n", c);
    return 0;
}