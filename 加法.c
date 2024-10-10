#include <stdio.h>
int main() {
  int a,b,answer;
  scanf("%d %d", &a, &b);
  if (a <= 1000000000 && a >= -1000000000 && b <= 1000000000 && b >= -1000000000) {
    answer = a + b;
    printf("%d",answer);
    return 0;
  } else {
    return 0;
  }
}