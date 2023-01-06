#include <stdio.h>
#include <math.h>

// Power will be >= 0.  Base will be > 0.
double recursive_pow(double base, int power) {
    if (power == 0)
        return 1.0;
    return base*recursive_pow(base, power - 1);
}

// x >= 1, n >= 1


double root_help(double base, double l, double h, int n) {
    double avg = (h + l)/2;
    if ((h - l)/avg < 1e-8)
        return avg;
    double d = recursive_pow(avg, n);
    if (d > base)
        h = avg;
    else
        l = avg;
    return root_help(base, l, h, n);
}

double root(double x, int n) {
    return root_help(x, 0, x, n);
}
int main() {
    double x = 2.5;
    int n = 3;
    printf("%dth power of %lf is %.15lf\n", n, x, pow(x, n));
    printf("%dth root of %lf = %.15lf\n", n, x, root(x, n));
    // Using math library's pow below for a more accurate answer:
    printf("More exact %dth root of %lf = %.15lf", n, x, pow(x, 1.0/n));
}
