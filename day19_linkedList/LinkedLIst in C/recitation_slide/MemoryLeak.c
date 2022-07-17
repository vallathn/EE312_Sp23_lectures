#include <stdlib.h>
#include <stdio.h>

int main(void) {
  int *x = (int*) malloc(sizeof(int));
  *x = 4;
  printf("%d\n", *x);
  return 0; // Error: didn't free this memory
}
