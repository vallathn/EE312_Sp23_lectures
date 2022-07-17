#include <stdlib.h>
int main(void) {
  free((void*) 0x45454545); // Error: free some random address
  int *x = (int*) malloc(sizeof(int));
  free(x+4); // Error: free outside malloc’d block.
  free(x);
  return 0;
}
