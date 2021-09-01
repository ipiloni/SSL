#include <stdio.h>
#include "scanner.h"

int finDeTexto = 0, separador = 0, cadena = 0;
TOKEN c;

int main(){
    do{
        c = get_token();
        switch (c){
            case SEP:
            printf("Separador\n");
            separador++;
            break;
            
            case CAD:
            printf("Cadena\n");
            cadena++;
            break;
            
            case FDT:
            printf("Fin de Texto\n");
            break;
            }
    } while(c != FDT);
    return 0;
}