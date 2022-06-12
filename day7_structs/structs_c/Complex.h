//
// Created by Vallath Nandakumar on 2/9/22.
//

#ifndef SP22_3PM_COMPLEX_H
#define SP22_3PM_COMPLEX_H

#ifndef POLAR
typedef struct Complex {
    double re;
    double im;
} Complex;
#else
typedef struct Complex {
    double r;
    double theta;
} Complex;
#endif
void printComplex(Complex c);
Complex addComplex (Complex a, Complex b);

#endif //SP22_3PM_COMPLEX_H
