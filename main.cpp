#include "sdt.h"
// Это учебный проект
int main(){
    int inp1, inp2;
    printf("Введите первое число: \n");
    scanf("%d", &inp1);
    printf("Введите второе число: \n");
    scanf("%d", &inp2);
    printf("Сумма введённых чисел: %d\n", inp1 + inp2);
    printf("Разность введённых чисел: %d\n", inp1 - inp2);
    printf("Деление чисел: %d\n", inp1/inp2);
    return 1;
}