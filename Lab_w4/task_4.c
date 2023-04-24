#include <stdio.h>
#include <math.h>

int main() {
    float a = 0.5;
    float b = 4.5;
    float dx = 0.4;
    float x, y, result;
    printf("x\t\t| f(x)\n");
    printf("--------------------------------\n");
    for (x = a; x <= b; x += dx) {
        // Обчислюємо значення функції з урахуванням виключних ситуацій
        if (x <= 0) {
            printf("%.2f\t| Невизначено\n", x);
        } else {
            y = log(x);
            printf("%.2f\t| %.2f\n", x, y);
        }
    }
    return 0;
}
 

// float a = -2, b = 12, dx = 0.5;
//     float x, y;
//     printf("\n****************\n");
//     printf("  X\t  Y\n");
//     printf("****************\n");
//     for (x = a; x <= b; x += dx) {
//     if (x == 2) {
//     printf("Невизначений результат для x = %.2f\n", x);
//     continue;
//     }
//     y = (pow(x, 4) - 12 * x) / (x - 2);
//     printf("%.2f\t%.2f\n", x, y);
