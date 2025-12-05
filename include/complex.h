// This file defines a structure for complex numbers and declares functions for complex number operations.

#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct {
    double real;
    double imag;
} Complex;

Complex add(Complex a, Complex b);
void print_complex(Complex c);

#endif // COMPLEX_H