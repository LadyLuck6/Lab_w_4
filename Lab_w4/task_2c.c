#include <stdio.h>

int main() {
    int x, product = 1, i = 11;
    printf("Введіть ціле число x: ");
    scanf("%d", &x);
    do {
        if (i < x) {
            product *= i;
        }
        i += 2;
    } while (i <= 59);//задаємо цикл з післяумовою
    printf("Добуток непарних чисел, менших за %d: %d\n", x, product);
    return 0;
}