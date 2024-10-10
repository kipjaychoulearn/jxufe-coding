#include <stdio.h>
int main() {
  int a,
  b,
  f;
  char c;
  while (1) {
    scanf("%d %d %c %d", &a, &b, &c, &f);
    if((a >= 3 && a <= 100) && (b >= 5 && b <= 100) && (c >= 33 && c <= 126) && (f >= 0 && f <= 1)) {
      break;
    } else {
      return 0;
    }
  }
  if (f != 0) {
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < b; j++) {
        printf("%c",c);
      }
      printf("\n");
    }
  }
  if (f == 0) {
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < b; j++) {
        if (i == 0 || i == a - 1 || j == 0 || j == b - 1) {
          printf("%c",c);
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
  }
  return 0;
}