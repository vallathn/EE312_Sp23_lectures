#include <stdio.h>

void overflowStack1 () {
    overflowStack1();
}

void overflowStack2() {
    int a[10000000];
    a[9999999]  = 1;
}

void exploreStack (char , int , double , int );
int main() {
    //overflowStack1();
    // overflowStack2();
    exploreStack('a', 1, 2.0, 3);
    return 0;
}

void exploreStack (char c, int n, double m, int o) {
    printf("Input parameters: \n\
        c is @%p\n\
        n is @%p\n\
        m is @%p\n\
        o is @%p\n", &c, &n, &m, &o);

        char x;
        char y;
        char z;
        int i1;
        double d1;
        char* xp;

    printf("Input parameters: \n\
        x is @%p\n\
        y is @%p\n\
        z is @%p\n\
        i1 is @%p\n\
        d1 is @%p\n\
        xp is @%p\n", &x, &y, &z, &i1, &d1, &xp);

}
