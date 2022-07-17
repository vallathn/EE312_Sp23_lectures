#include <stdlib.h>
int main(void) {
  int *x;
  *x = 4; // Error: using x before initialized
  return 0;
}
