#include <stdio.h>
int main() {
    int x;
    int product = 1, i = 11;// початкове значення добутку непарних чисел
    printf("Введіть ціле число x: ");
    scanf("%d", &x);
    while (i <= 59) {
        if (i < x) {
            product *= i;
        }
        i += 2;
    }//задаємо цикл з передумовою
    printf("Добуток непарних чисел, менших за %d: %d\n", x, product);
    return 0;
}