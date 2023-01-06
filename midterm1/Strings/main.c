#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct car {
    char serID [5];
    double odometer;
    char* owner;
    int capacity; // capacity of buffer holding owner's name
};

struct car* increase (struct car* mycar, char* appendix) {
    int la = strlen(appendix);
    int lo = strlen(mycar->owner);
    if (lo + la + 1 > mycar->capacity) {
        char* new_owner = (char*)malloc(lo + la + 1);
        for (int i = 0; i < lo; i++) {
            new_owner[i] = mycar->owner[i];
        }
        free(mycar->owner);
        mycar->owner = new_owner;
    }
    for (int i = 0; i < la; i++) {
        mycar->owner[lo + i] = appendix[i];
    }
    mycar->owner[lo + la] = '\0';
}


int main() {
    return 0;
}
