//
// Created by Vallath Nandakumar on 1/24/17.
//

#include <stdio.h>
#include "arrayFunction.h"
char upper [1000];

char capitalize (char c) {
    if (c <= 'z' && c >= 'a') {  // means c is an lowercase char
        return c - ('a' - 'A');
    }
    else {
        return c;
    }
}

void convertToUpper(char* input) {
    // pre: input[] is a null-terminated string
    // pre: input has max length 999 chars + null
    int i = 0;
    char c = input[i];
    while (c != '\0') {
        upper[i] = capitalize(c);
        i++;
        c = input[i];
    }
    upper[i] = '\0';
    return;
}

void capitalizeFirstLetter (char input[]) {
    // pre: input[] is a null terminated string
    // pre: input has max length 999 chars + null
    int i = 0;
    int is_first = 1;
    char c = input[i];
    while (c != '\0') {
        if (c == ' ') {
            is_first = 1;
            printf("%c", c);
            i++;
            c = input[i];
            continue; // rewrite without continue
        }
        if (is_first) {
            printf("%c", capitalize(input[i]));
            is_first = 0;
            i++;
            c = input[i];
            continue;
        }
        printf("%c", c);
        i++;
        c = input[i];
    }
}