/*En main.c solo vamos a tener la función main que llama a la
función get_token (que estará en scanner.c) y muestra en pantalla
los resultados devueltos: que token es y el lexema correspondiente.*/
#include <stdio.h>
#include "scanner.h"

char c;

int main() {
while (c = getchar() != EOF){
    get_token(c);   
    }
    return 0;
}