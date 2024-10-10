#include <stdio.h>
int main() {
  int a,b,c,d;
  int X;
  float A,B;
  float Y;
  while (1) {
    scanf("%f", &A);
    if (A >= 100 && A <= 1000) {
    break;
  } else {
    return 0;
  }
  }
  X = (int)A;
  Y = A - X;
  
  a = X / 100;
  b = (X / 10) % 10;
  c = X % 10;
  d = (int)(Y * 10);
  B = d + c * 0.1 + b * 0.01 + a * 0.001;
  
  printf("%.3f\n", B);
  return 0;
}