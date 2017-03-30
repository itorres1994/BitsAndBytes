#include <stdio.h>

unsigned char extraction(unsigned int number, unsigned int l, unsigned int r) {
  return (unsigned char)((number << 32 - (l + 1)) >> (32 - (l - r + 1)));
}

int main() {
  unsigned int i1 = 1835098984u;
  unsigned int i2 = 1768842611u;
 
  unsigned char c1 = extraction(i1, 31, 24);
  unsigned char c2 = extraction(i1, 24, 16);
  unsigned char c3 = extraction(i1, 16, 8);
  unsigned char c4 = extraction(i1, 8, 0);

  unsigned char c5 = extraction(i2, 31, 24);
  unsigned char c6 = extraction(i2, 24, 16);
  unsigned char c7 = extraction(i2, 16, 8);
  unsigned char c8 = extraction(i2, 8, 0);

  printf("%c%c%c%c%c%c%c%c\n", c1,c2,c3,c4,c5,c6,c7,c8);
}
