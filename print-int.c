#include <stdio.h>

int main() {
  int x = 10;
  int y = 13;
  int result = x + y;
  printf("x = %d\n", x);
  printf("y = %d\n", y);
  printf("size of signed int in bytes is %lu.\n", sizeof(x));
  printf("size of signed int in bits is %lu.\n", (8*sizeof(x)));
  printf("10 + 13 = %d.\n", result);
}
