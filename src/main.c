#include <stdio.h>
#include "solver.h"

int main() {
    double a, b, c, d;
    printf("Enter coefficients a, b, c, d for the cubic equation ax^3 + bx^2 + cx + d = 0:\n");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    Complex roots[3];
    solve_cubic(a, b, c, d, roots);

    printf("The roots of the equation are:\n");
    for (int i = 0; i < 3; i++) {
        print_complex(roots[i]);
    }

    return 0;
}