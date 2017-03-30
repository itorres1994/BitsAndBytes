#include <stdio.h>

int main() {
  unsigned char b3 = 202;
  unsigned char b2 = 254;
  unsigned char b1 = 186;
  unsigned char b0 = 190;
  unsigned int u = (unsigned int)b3 << 24 | (unsigned int)b2 << 16 | (unsigned int) b1 << 8 | (unsigned int)b0;

  printf("%.8X\n",u);
}
  
