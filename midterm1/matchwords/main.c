#include <stdio.h>
#define NO_WORDS (5)

int match (char* w1, char* w2) {
    while (*w2 != 0 && *w1 != 0) {
        if (*w1 != *w2)
            return 0;
        w1++; w2++;
    }
    return (*w1 == 0 && *w2 == 0);
}
int main() {
    char words [NO_WORDS][20];
    for (int i = 0; i < 5; i++) {
        scanf ("%s", words[i]);
    }
    puts("Done reading library.");
    char new_word[20];
    scanf ("%s", new_word);
    int matched = 0;
    while (!matched) {
        for (int i = 0; i < NO_WORDS; i++) {
            matched = match(new_word, words[i]);
            if (matched) {
                puts(new_word);
                break;
            }
        }
        scanf ("%s", new_word);
    }
    return 0;
}
