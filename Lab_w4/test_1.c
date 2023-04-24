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
