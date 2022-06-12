//
// Created by Vallath Nandakumar on 6/8/22.
//

#include <stdio.h>
#include "arrayFunctions.h"
char upper [1000];

char capitalize(char c) {
   if (c <= 'z' && c >= 'a') {
       return c - ('a' - 'A');
   } else {
       return c;
   }
}

void convertToUpper (char* input) {
    // pre: input is a null terminated string
    // pre: input has max length 999 + null
    int i = 0;
    char c = input [i];
    while (c != '\0') {
        upper [i] = capitalize(c);
        i++;
        c = input [i];
    }
    upper[i] = '\0';

}
void capitalizeFirstLetter (char input []) {
    // pre: input is a null terminated string
    // pre: input has max length 999 + null
    int i = 0;
    int is_first = 1;
    char c = input [i];
    while (c != '\0') {
        if (c == ' ') {
            is_first = 1;
            putchar(c);
            i++;
            c = input[i];
            continue;
        }
        if (is_first) {
            putchar(capitalize(c));
            is_first = 0;
            i++;
            c = input[i];
            continue;
        }
        putchar(c);
        i++;
        c = input[i];
    }
}




