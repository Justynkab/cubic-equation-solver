#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "solver.h"
#include "complex.h"

void solve_cubic(double a, double b, double c, double d) {
    // Normalize coefficients
    if (a == 0) {
        printf("Coefficient 'a' cannot be zero.\n");
        return;
    }
    
    double f = ((3 * b / a) - ((b * b) / (a * a))) / 3;
    double g = ((2 * (b * b * b) / (a * a * a)) - (9 * b / a * c) + (27 * d / a)) / 27;
    double h = (g * g / 4) + (f * f * f / 27);

    if (h > 0) {
        // One real root and two complex roots
        double r = -(g / 2) + sqrt(h);
        double s = cbrt(r);
        double t = -(g / 2) - sqrt(h);
        double u = cbrt(t);

        double real_root = (s + u) - (b / (3 * a));
        printf("Real root: %.2f\n", real_root);

        double real_part = -(s + u) / 2 - (b / (3 * a));
        double imaginary_part = fabs(s - u) * sqrt(3) / 2;

        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n", real_part, imaginary_part, real_part, imaginary_part);
    } else if (h == 0) {
        // All roots real and at least two are equal
        double r = -(g / 2);
        double s = cbrt(r);
        double real_root = 2 * s - (b / (3 * a));
        double double_root = -s - (b / (3 * a));
        
        printf("Real roots: %.2f (double root) and %.2f\n", double_root, real_root);
    } else {
        // All roots are real and unequal
        double i = sqrt(((g * g) / 4) - h);
        double j = cbrt(i);
        double k = acos(-(g / (2 * i)));
        double l = -j;
        double m = cos(k / 3);
        double n = sqrt(3) * sin(k / 3);
        double p = -(b / (3 * a));

        double root1 = 2 * j * cos(k / 3) - p;
        double root2 = l * (m + n) - p;
        double root3 = l * (m - n) - p;

        printf("Real roots: %.2f, %.2f, and %.2f\n", root1, root2, root3);
    }
}