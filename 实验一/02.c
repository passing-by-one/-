#include <stdio.h>

int main() {
    float celsius;
    int result;
    printf("�����������¶ȣ�");
    result = scanf("%f", &celsius);
    if (result != 1) {
        printf("�������\n");
        return 1;
    }
    float fahrenheit = 9.0 / 5.0 * celsius + 32;
    printf("��Ӧ�Ļ����¶�Ϊ��%.2f\n", fahrenheit);
    return 0;
}