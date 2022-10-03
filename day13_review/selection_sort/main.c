#include <stdio.h>
#include <string.h>

void print_table(char** table, int len) {
    for (int i = 0; i < len; i++) {
        printf("%s, ", table[i]);
    }
    puts("");
}
int table_len(char** table) {
    int l = 0;
    while (*table != 0) { l++;
        table++;
    }
    return l;
}
int smallest(char** table) {
    int min = strlen(table[0]);
    int i = 0;
    int k = 0;
    int l = table_len(table);
    for (i = 1; i < l; i++) {
        int m = strlen(table[i]);
        if (m < min) {
            min = m;
            k = i;
        }
    }
    return k;
}

void swap (char** a, char** b) {
    char* tmp = *a;
    *a = *b;
    *b = tmp;
}
void sort (char** table) {
    int len = table_len(table);
    int min_length = strlen(table[0]);
    int min_index = 0;
    for (int i = 0; i < len -1; i++) {
        int smallest_in_rest = smallest(table + i + 1) + i + 1;
        if (strlen(table[smallest_in_rest]) < strlen(table[i])) {
            swap(table + smallest_in_rest, table+i);
        }
    }
}

int main() {
    char* a1 = "abcde";
    char* a2 = "xy";
    char* a3 = "lmno";
    char* table[4] = {a1, a2, a3, 0};
    int len_of_table = table_len(table);
    print_table(table, 3);
    sort(table);
    print_table(table, 3);

    return 0;
}
