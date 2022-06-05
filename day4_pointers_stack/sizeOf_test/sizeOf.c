#include <stdio.h>

int b [5];
int main() {

    char a[10];
    char c[16];
    printf("size of int array of size 5 is %lu bytes\n", sizeof(b));
    printf("size of char array of size 10 is %lu bytes\n", sizeof(a));
    printf("size of int is %lu bytes\n", sizeof(int));
    printf("size of char array of size 16 is %lu bytes\n", sizeof(c));
    char hello [] = "Hello World";
    char* howdy = "Helli World";
    printf("size of hello is %lu\n", sizeof(hello));
    printf("size of howdy is %lu\n", sizeof(howdy));

    putchar(hello[3]);
    putchar('\n');
    putchar(howdy[-5]);
    puts("");
    char how[] = { 'a', 'b'};
    printf("size of how is %lu\n", sizeof(how));

    howdy =  0;
    printf("%c\n", *howdy);


    return 0;
}