#include <stdio.h>

int main() {
    int i, j, product, result = 0;
    // product - для зберігання добутку внутрішнього циклу
    //  аresult - для зберігання суми всіх добутків.
    for (i = 1; i <= 10; i++) {
        product = 1;
    for (j = 1; j <= i; j++) {
            product *= (i + j);
        }
        result += product;
    }
    printf("Result: %d\n", result);
    return 0;
}
