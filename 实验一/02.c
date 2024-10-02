#include <stdio.h>

int main() {
    float celsius;
    int result;
    printf("请输入摄氏温度：");
    result = scanf("%f", &celsius);
    if (result != 1) {
        printf("输入错误！\n");
        return 1;
    }
    float fahrenheit = 9.0 / 5.0 * celsius + 32;
    printf("对应的华氏温度为：%.2f\n", fahrenheit);
    return 0;
}