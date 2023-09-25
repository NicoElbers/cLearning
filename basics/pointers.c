#include <stdio.h>

void add(int *, int);

int main() {
  int num[5] = {0, 1, 2, 3, 4};
  int *iptr = num;

  add(iptr, 5);

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
}

void add(int *pntr, int n) {
  for (int i = 0; i < n; ++i) {
    *(pntr + i) += 2;
    printf("%d\n", *(pntr + i));
  }
  printf("\n");
}
