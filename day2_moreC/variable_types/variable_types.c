#include <stdio.h>
#include <math.h>

int global_x;
void extra_function();

int main() {
    // http://www.cplusplus.com/reference/cstdio/printf/
    printf("%d \n", global_x);
    global_x = 1234;
    printf("%d %lu\n", global_x, sizeof(global_x) );
    int local_x;
    printf("%d\n", local_x);
    local_x = 7890;
    printf("%d\n", local_x);

    // ASCII values
    char c = 'a';
    printf("%c %lu\n", c, sizeof(c));
    printf("%d\n", c);
    c = c + 1;
    printf("%c\n", c);
    printf("%d\n", c);

    unsigned y = 2;
    printf("%u\n", y);

    float f1 = 4/3;
    printf("%f %lu\n", f1, sizeof(unsigned));
    f1 = 4.0/3;
    printf("%f %lu\n", f1, sizeof(float));

    double f2 = sqrt(2);
    printf("%f %lu\n", f2, sizeof(f2));
    printf("%f24\n", f2);

    float* f1p = &f1;
    printf("%p %lu\n", f1p, sizeof(f1p));

    extra_function();

    int x = 'a' + 1024;
    char d = x;
    printf("char d  = %c\n", d);
    return 0;
}
