#include "sdt.h"
// ��� ������� ������
int main(){
    int inp1, inp2;
    printf("������� ������ �����: \n");
    scanf("%d", &inp1);
    printf("������� ������ �����: \n");
    scanf("%d", &inp2);
    printf("����� �������� �����: %d\n", inp1 + inp2);
    printf("�������� �������� �����: %d\n", inp1 - inp2);
    printf("������� �����: %d\n", inp1/inp2);
    return 1;
}