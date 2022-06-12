#include <stdio.h>
#include <stdlib.h>
#include "Complex.h"

int main() {
    Complex c1 = {3, 4};
    printComplex(c1);
    //c1.re = 5;
    printComplex(c1);
    Complex c2 = {4, 5};
    printComplex(addComplex(c1, c2));
    Complex* c3p = (Complex*)malloc(sizeof(Complex));
    //c3p->re = 10; (*c3p).im = 19;
    printComplex(addComplex(c1, *c3p));
    free(c3p);
    return 0;
}
