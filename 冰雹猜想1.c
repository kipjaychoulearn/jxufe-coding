#include <stdio.h>
int main() {
    int arr[100]; //最多存储100个整数
    int n = 0;
    int temp;

    while (1) {
        scanf("%d", &temp);
        if (temp == 0) {
            break;
        }
        arr[n++] = temp;
    }
    for (int i = n - 1;i >= 0;i--) {
        printf("%d", arr[i]);
        if (i > 0) {
            printf(" ");
        }
    }
    printf("\n")
    return 0;
}