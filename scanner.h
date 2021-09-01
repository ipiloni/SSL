#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED
#include <stdio.h>
#include <ctype.h>      
#include <stdbool.h>
#include <stdlib.h>

typedef enum{FDT, SEP, CAD} TOKEN;

int get_token();

#endif //SCANNER_H_INCLUDED