#include <stdio.h>

int main() {
    int minutes;
    printf("������ʱ�䣨���ӣ���");
    scanf("%d", &minutes);
    int hours = minutes / 60;
    int remainingMinutes = minutes % 60;
    printf("%d ���� = %d Сʱ %d ����\n", minutes, hours, remainingMinutes);
    return 0;
}