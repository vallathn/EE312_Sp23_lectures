/* 3d.c: Illustrates a multi-dim array */
#include <stdio.h>

int main() {
    int a[][3][2] = {{{1,2}, {3,4}, {5,6}},
    				{{7,8}, {9,10}, {11,12}},
                    {{13,14}, {15,16}, {17,18}},
                    {{19,20}, {21,22}, {23,24}}
					};
    int i, j, k;
    
    for (i = 0; i < 4; ++i) { 
        for (j = 0; j < 3; ++j) {
            for (k = 0; k < 2; ++k)
                printf("%d ", a[i][j][k]);
            putchar('\n');
        }
        putchar('\n');
    }
    return 0;
}

