#include <stdio.h>

int main() {
  char c = 'C';
  char a = 65;
  char str[] = "CAFEBABE";

  printf("c = %c\n", c);
  printf("a = %c\n", a);
  printf("%c%c%c%c%c%c%c%c\n", str[0],str[1],str[2],str[3],str[4],str[5],str[6],str[7]);
  printf("number of bytes: %lu.\n", sizeof(str));
}
