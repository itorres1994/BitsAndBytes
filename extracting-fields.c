#include <stdio.h>

unsigned int extraction(unsigned int num, unsigned int l, unsigned int r) {
  return (num << ( 32 - ( l+1 )) >> ( 32 - ( l-r+1 ) ) ) ;
}

int main() {
  unsigned int cafe = 0xCAFEBABE;
  unsigned int b0 = extraction(cafe, 1, 0);
  unsigned int b1 = extraction(cafe, 3, 2);
  unsigned int b2 = extraction(cafe, 6, 4);
  unsigned int b3 = extraction(cafe, 10, 7);
  unsigned int b4 = extraction(cafe, 14, 11);
  unsigned int b5 = extraction(cafe, 17, 15);
  unsigned int b6 = extraction(cafe, 20, 18);
  unsigned int b7 = extraction(cafe, 24, 21);
  unsigned int b8 = extraction(cafe, 28, 25);
  unsigned int b9 = extraction(cafe, 31, 29);

  printf("%d %d %d %d %d %d %d %d %d %d\n", b9, b8, b7, b6, b5, b4, b3, b2, b1, b0);
}
