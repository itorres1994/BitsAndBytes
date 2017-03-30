#include <stdio.h>

int main() {
  float x = 10;
  float y = 13;
  float result = x + y;
  int iResult = (int) result;
  printf("x = %f\n", x);
  printf("y = %f\n", y);
  printf("size of float in bytes is %lu.\n", sizeof(x));
  printf("size of float in bits is %lu.\n", (8*sizeof(x)));
  printf("%f + %f = %f.\n", x,y,result);
  printf("%f + %f = %d.\n", x,y,iResult);
}
