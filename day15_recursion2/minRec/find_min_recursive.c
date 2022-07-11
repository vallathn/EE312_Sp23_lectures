#include <stdio.h>

/* return the smallest of the elements in array x[]
 * there are n elements in x[] (x[0].. x[n-1])
 * solve the problem recursively and
 * use an "n-1" type of decomposition
 * pre: n > 0.
 * post: x is unchanged
 */
int minRec1(int x[], int n) {
    if (n == 1)
        return x[0];
    int m = minRec1(x + 1, n - 1);
    return m < x [0] ? m : x[0];
}

/*
 * return the smallest of the elements in array x[]
 * there are n elements in x[] (x[0].. x[n-1])
 * n may be either odd or even
 * solve the problem recursively and
 * use an "n / 2" type of decomposition
 */
int minRec2(int x[], int n) {
    if (n == 1) return x[0];
    int l = minRec2(x, n/2);
    int r = minRec2(x + n/2, n - n/2);
    return l < r ? l : r;
}


int main() {
    int a[] = {1, 3, 4, 9, 0, -4, 5};
    int b[] = {-11, 3, 4, 9, 0, -4, 5};
    int c[] = {1, 3, 4, 9, 0, -4, -55};

    printf("%d %d %d", minRec1(a, 7), minRec1(b, 7), minRec1(c, 7));
    puts("");
    printf("%d %d %d", minRec2(a, 7), minRec2(b, 7), minRec2(c, 7));
    return 0;
}