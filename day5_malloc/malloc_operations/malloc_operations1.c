#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char* str;
    str = (char*)malloc(11); // allocate space for str, of 11 bytes
    if (str == 0) {
        printf("out of memory");
        exit(-1);
    }

    strcpy(str, "ece.utexas"); // initialize str
    printf("1. String = %s, Address = %p\n", str, str) ; // print str and its address

    char* str_old = str; // another variable that is initialized to the same pointer as str
    str = (char*)realloc(str, 500000); // str is now reallocated.  Old area of memory is freed.
    strcat(str, ".edu.space");
    printf("2. String = %s, Address = %p\n", str, str) ;
    printf("3. String old = %s, Address old = %p\n", str_old, str_old) ; // not kosher, since str_old refers to freed memory

    free(str); // d00000
    str = 0;
    printf("str = %p, str_old = %p\n ", str, str_old);
    //free(str_old); // x...5860
    free(str);
    free(str);

//    int n = 10;
//    int A[n];
//    int i = 0;
//    for (i = 0; i < n; i++) {
//        A[i] = random();
//    }
//    int* B = (int*) malloc(2*n);
//    free(B);
//    B = A; // OK
//    //A = B;// not OK, since cannot re-assign array variable, even if B has not been freed
//
//    // free(str_old);
    return 0;
}