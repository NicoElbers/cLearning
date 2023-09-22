#include <stdio.h>
void addArr(int[], int);

int main(int argc, char *argv[]) {

  int nums[] = {1, 2, 3, 4, 54};
  int ARRLEN = 10;
  int nums2[] = {4, 4, 8, 5, 2, 3, 1, 1, 1, 62};

  addArr(nums2, ARRLEN);
  for (int i = 0; i < ARRLEN; ++i) {
    printf("%i\n", nums2[i]);
  }

  char str[6] = "hello\n";

  printf("%s", str);
  puts(str);

  return 0;
}

void addArr(int nums[], int ARRLEN) {
  for (int i = 0; i < ARRLEN; ++i) {
    nums[i] += 1;
  }
}
