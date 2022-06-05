#include <stdio.h>

// char upper[1000];
#include "arrayFunction.h"
int main() {
 /*   int a = 3;
    printf("Storage size for int: %lu \n", sizeof(int));
    printf("Storage size for int: %lu \n", sizeof(a));
    printf("Storage size for pointer: %lu \n", sizeof(&a));
    char str1 [] = "abc";
    printf("Storage size for string: %lu \n", sizeof(str1));
    char str2 [] = {'1', '2', '3'};
    printf("Storage size for char array: %lu \n", sizeof(str2));

    char* str3 = "abcde";
    printf("Storage size for str3 string: %lu \n", sizeof(str3));*/

    char in [] = "abdcE";
    char* b = "123";
    convertToUpper(in);
    printf("in is %s\n", in);
    printf("upper is %s\n", upper);

    char in2 [] = "hi, how     are you?";
    capitalizeFirstLetter(in2);
    puts("\nAll done!");
    return 0;
}

