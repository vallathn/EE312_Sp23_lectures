#include <stdint.h>

int sum (int a [], size_t n) {
    if (n == 0) return 0;
    return a[0] + sum(a + 1, n - 1);
}
