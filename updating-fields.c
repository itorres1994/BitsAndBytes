#include <stdio.h>

unsigned int power(unsigned int base, unsigned int pow) {
  if(pow == 0) {
    return 1;
  }else {
    return base * power(base, --pow);
  }
}


unsigned int findFieldWidth(unsigned int width) {
  int value = 0;
  for(int i = 0; i < width; i++) {
    value = value + power(2, i);
  }
  return value;
}

unsigned int mask(unsigned int l, unsigned int r) {
  unsigned int bitWidth = findFieldWidth(l-r+1);
  return (bitWidth <<  r);
}


int mutation(unsigned int l, unsigned int r, unsigned int m, unsigned int number) {
  return ( (number & ~mask(l,r) ) | (m << r ) );
}

void printBin(unsigned int number) {
  int theBits[32];
  for(int i = 0; i <= 31; ++i) {
    theBits[i] = ((number >> i) & 1);
  }
  printf("Binary -> ");
  for(int i = 31; i >= 0; i--) {
    printf("%d", theBits[i]);
  }
  printf("\n");
}

int main() {
  //printf("Field width 3: 0b0111 == ");
  //printBin(findFieldWidth(3));
  //printf("\n");
  //printf("Field width 4: 0b1111 == %d\n", findFieldWidth(4));
  //printf("2^2 = %d\n", power(2,2));
  //printBin(mask(4,2));
  unsigned int number = 389710625u;
  //printBin(number);
  unsigned int augment = mutation(26,24,2,number);
  //printBin(augment);
  unsigned int augment2 = mutation(19,14,17,augment);
  //printBin(augment2); 
  printf("%08x\n", augment2);
}
