#include <stdio.h>

// 函数声明
int time_to_seconds(int hours, int minutes, int seconds);

int main() {
    int hours, minutes, seconds, total_seconds;

    // 输入时间
    printf("请输入时间（格式：时:分:秒）: ");
    scanf("%d:%d:%d", &hours, &minutes, &seconds);

    // 调用转换函数
    total_seconds = time_to_seconds(hours, minutes, seconds);

    // 输出结果
    printf("%d小时%d分%d秒＝%d秒\n", hours, minutes, seconds, total_seconds);

    return 0;
}

// 时间转换为秒数的函数定义
int time_to_seconds(int hours, int minutes, int seconds) {
    int total_seconds = hours * 3600 + minutes * 60 + seconds;
    return total_seconds;
}
