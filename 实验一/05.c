#include <stdio.h>

int main() {
    int num;
    printf("����������(100-999)��");
    scanf("%d", &num);
    if (num < 100 || num > 999) {
        printf("������������� 100 �� 999 ֮���������\n");
        return 1;
    }
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;
    int encrypted = tens * 100 + hundreds * 10 + ones;
    printf("�����λ�����ܺ�Ϊ ��%d\n", encrypted);
    return 0;
}