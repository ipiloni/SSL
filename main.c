#include "scanner.c"

char c;

int main() {
    while ((c = getchar()) != EOF) {
        get_token(c);
    }
    if (c == EOF) {
        printf("\nFin de Texto");
    }
    return 0;
}