#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

    #include <ctype.h>      
    #include <stdbool.h>
    #include <stdio.h>

    typedef enum{FDT, SEP, CAD} TOKEN;

int a = 0;
void get_token(char c);


#endif /*SCANNER_H_INCLUDED*/