#include <math.h>
#include <stdio.h>

int checkPrime(int);

int main(int argc, char *argv[]) {
  long endNum = 100000000;

  // printf("Till what number to calculate the Goldbach conjecture?\n> ");
  // scanf("%ld", &endNum);

  int errorCounter = 0;
  for (int currentNum = 4; currentNum <= endNum; currentNum += 2) {
    errorCounter++;
    for (int i = 2; i <= currentNum; ++i) {
      if (checkPrime(i) == 1) {
        if (checkPrime(currentNum - i) == 1) {
          errorCounter--;
          break;
        }
      }
    }
  }

  printf("got %d errors\n", errorCounter);

  return 0;
}

int checkPrime(int n) {
  if (n == 2)
    return 1;
  if (n < 2 || n % 2 == 0)
    return 0;
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}
