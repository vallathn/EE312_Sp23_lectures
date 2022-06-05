#include <stdio.h>
void overflowStack1 () {
    int a[10000000];
    a[100] = 1;
}

void overflowStack2 () {
    overflowStack2();
}

void exploreStack(char c, int n, double m, int o) {
    char* pc = &c;
    int* pn = &n; //pointer to n
    double* pm = &m;  //pointer to m
    int* po = &o; // pointer to o

    // print out pointers of data on stack
    printf("Input parameters: \n\
           c is @%p\n\
           n is @%p\n\
           m is @%p\n\
           o is @%p\n", pc, pn, pm, po);
    printf("Local variables: \n\
           pc is @%p\n\
           pn is @%p\n\
           pm is @%p\n\
           po is @%p\n", &pc, &pn, &pm, &po);

}
int main() {
    // overflowStack1();
    // overflowStack2();
    exploreStack('a', 1, 2.0, 3);


    double list [3] = {1.0, 2.0, 3.2};
    printf("list[0-2] is @ %p, @%p, @%p\n", list, list+1, list+2);

    double list2 [4] = {5.0, 5.1, 5.2, 5.3};
    printf("list[-1] is %g\n", list[-1]);


    // A: 5.3
    // B: 5.0
    // C: 3
    // D: Other/junk
    // E: Error
    return 0;
}

