#include "scanner.h"

char c;

int get_token(){
    if (isspace(c))
        c = get_token();
    else if (isdigit(c))
        return 2;
    else if (isalpha(c))
        return 2;
    else if (ispunct(c))
        return 1;
    else if (c == EOF)
        return 0;
}
