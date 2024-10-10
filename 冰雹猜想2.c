#include <stdio.h>
int a,b;
int main() {
    scanf("%d", &a);
    printf("%d ",a);
    while (1) {
    scanf("%d %d", &a, &b);
    if (a % 2 == 0) {
        b = a / 2;
        printf("%d ",b);
    }
    else 
    {
        b = a * 3 + 1;
        printf("%d ",b);
    }
    a = b;
        if (b == 1) {
            break;
        }
    }
    return 0;
}