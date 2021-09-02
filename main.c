#include "scanner.h"

char c;

int main() {
while ((c = getchar()) != EOF){
    get_token(c);   
    }
    if (c == EOF){
        printf("Fin de Texto");
    }
    return 0;
}