#include <stdio.h>

// ��������
int time_to_seconds(int hours, int minutes, int seconds);

int main() {
    int hours, minutes, seconds, total_seconds;

    // ����ʱ��
    printf("������ʱ�䣨��ʽ��ʱ:��:�룩: ");
    scanf("%d:%d:%d", &hours, &minutes, &seconds);

    // ����ת������
    total_seconds = time_to_seconds(hours, minutes, seconds);

    // ������
    printf("%dСʱ%d��%d�룽%d��\n", hours, minutes, seconds, total_seconds);

    return 0;
}

// ʱ��ת��Ϊ�����ĺ�������
int time_to_seconds(int hours, int minutes, int seconds) {
    int total_seconds = hours * 3600 + minutes * 60 + seconds;
    return total_seconds;
}
