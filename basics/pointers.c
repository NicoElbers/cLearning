#include <stdio.h>

int main() {
  int num[5] = {0, 1, 2, 3, 4};
  int *iptr = num;

  printf("%d\n", *iptr);
  iptr++;
  printf("%d\n", *iptr);
  iptr++;
  printf("%d\n", *iptr);
  iptr++;
  printf("%d\n", *iptr);
  iptr++;
  printf("%d\n", *iptr);
  iptr++;
  printf("%d\n", *iptr);
  iptr++;
  printf("%d\n", *iptr);
  iptr++;

  char *cptr;
  float *fptr;
}
