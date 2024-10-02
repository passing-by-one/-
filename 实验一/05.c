#include <stdio.h>

int main() {
    int num;
    printf("请输入整数(100-999)：");
    scanf("%d", &num);
    if (num < 100 || num > 999) {
        printf("输入错误，请输入 100 到 999 之间的整数。\n");
        return 1;
    }
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;
    int encrypted = tens * 100 + hundreds * 10 + ones;
    printf("这个三位数加密后为 ：%d\n", encrypted);
    return 0;
}