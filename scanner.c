#include "scanner.h"

char c;

int get_token(){
    if (isspace(c))
        c = get_token();
    else if (isdigit(c))
        return CAD;
    else if (isalpha(c))
        return CAD;
    else if (ispunct(c))
        return SEP;
}
