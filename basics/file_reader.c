#include <stdio.h>

int main() {
  FILE *out_file;
  char ch;

  out_file = fopen("testing.txt", "rw");

  if (out_file == NULL) {
    printf("ERROR: fuck you, file not there\n");
    return 69;
  }

  while ((ch = fgetc(out_file)) != EOF) {
    printf("%c", ch);
  }
}
