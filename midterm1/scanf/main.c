#include <stdio.h>

int main() {
    char str [20];
    int i = 0;
    scanf("%c", str + i);
    while (str[i] != 0) {
        i++;
        scanf("%c", str + i);
    }
    puts(str);
    return 0;
}
