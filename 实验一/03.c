#include <stdio.h>

int main() {
    int minutes;
    printf("请输入时间（分钟）：");
    scanf("%d", &minutes);
    int hours = minutes / 60;
    int remainingMinutes = minutes % 60;
    printf("%d 分钟 = %d 小时 %d 分钟\n", minutes, hours, remainingMinutes);
    return 0;
}