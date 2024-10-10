#include <stdio.h>
int main() {
  char a;
  a = '*';
  printf("  %c\n", a);
  printf(" %c%c%c\n", a, a, a);
  printf("%c%c%c%c%c\n", a, a, a, a, a);
  printf(" %c%c%c\n", a, a, a);
  printf("  %c\n", a);
  return 0;
}