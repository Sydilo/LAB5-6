#include <stdio.h>

int main()
{
    int min; int num;

    printf("Введіть послідовність чисел: ");
    scanf("%d", &min);

    while (scanf("%d", &num) == 1) {
        if (num < min) {
            min = num;
        }
    }

    printf("Мінімальний елемент послідовності: %d\n", min);

    return 0;
}