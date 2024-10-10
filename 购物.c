#include <stdio.h>
int main() {
  int a,b,B;
  float A;
  while (1) {
    scanf("%d %d", &a, &b);
    if ((a <= 10000 && a >= 0) && (b >= 0 && b <= 9))
    {
    break;
    } else {
    return 0;
    }
  }
  A = a * 1 + b * 0.1;
  B = A / 1.9;
  printf("%d",B);
  return 0;
}