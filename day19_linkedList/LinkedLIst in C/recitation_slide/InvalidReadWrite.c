#include <stdlib.h>
#include <stdio.h>

int main(void) {
  int *x = (int*) malloc(sizeof(int));
  x += 2; // x now points to invalid memory (some random location)
  printf("%d\n", *x); // Error: Reading to an invalid location of memory
  *x = 4; // Error: Writing to an invalid location of memory
  free(x-2); // This Line is correct
  printf("%d\n", *((int*)4545445)); // Error: Even worse read
  return 0;
}
