//
// Created by Vallath Nandakumar on 2/9/22.
//

#include <stdio.h>
#include "Complex.h"
#include <math.h>
#ifndef POLAR
void printComplex (Complex c) {
    printf("[%g, %g]", c.re, c.im);
}

Complex addComplex (Complex a, Complex b) {
    Complex sum;
    sum.re = a.re + b.re;
    sum.im = a.im + b.im;
    return sum;
}
#else
Complex addComplex (Complex a, Complex b) {
    Complex sum;
    double ra = a.r*cos(a.theta);
    double ia = a.r*sin(a.theta);
    double rb = b.r*cos(b.theta);
    double ib = b.r*sin(b.theta);
    sum.r = sqrt(pow(ra + rb, 2) + pow(ia + ib, 2));
    sum.theta = atan((ia + ib)/(ra + rb));
    return sum;
}

void printComplex(Complex c) {
    printf("[%g, %g (rad)]", c.r, c.theta);
}

#endif
