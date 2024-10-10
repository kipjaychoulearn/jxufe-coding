#include <stdio.h>

int main() {
    double input;
    scanf("%lf", &input);
    
    // 检查输入范围
    if (input < 100 || input >= 1000) {
        return 1;  // 输入无效
    }
    
    int whole = (int)input;  // 整数部分
    int decimal = (int)((input - whole) * 10 + 0.5);  // 小数部分，四舍五入
    
    // 分解整数部分的各个位
    int hundreds = whole / 100;
    int tens = (whole / 10) % 10;
    int ones = whole % 10;
    
    // 构建反转后的数字
    double result = decimal + ones * 0.1 + tens * 0.01 + hundreds * 0.001;
    
    printf("%.3f\n", result);
    
    return 0;
}