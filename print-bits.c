#include <stdio.h>

int main() {
  unsigned char first = 181;
  signed char second = -75;
  int theBits[8];
  int theBits2[8];
  for(int i = 0; i <= 7; ++i) {
    theBits[i] = ((first >> i) & 1);
  }
  for(int j = 0; j <= 7; ++j) {
    theBits2[j] = ((second >> j) & 1); 
  } 
  printf("%d%d%d%d%d%d%d%d\n", theBits[7],theBits[6],theBits[5],theBits[4],theBits[3],theBits[2],theBits[1],theBits[0]);
  printf("%d%d%d%d%d%d%d%d\n", theBits2[7],theBits2[6],theBits2[5],theBits[4],theBits[3],theBits[2],theBits[1],theBits[0]); 
}
