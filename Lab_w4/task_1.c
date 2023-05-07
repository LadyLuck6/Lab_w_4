#include <stdio.h>
#include <math.h>//введення бібліотек

int main() {
int a, b, y;
float x; //оголошуємо змінні

printf("Введіть ціле число a: ");
scanf("%d", &a);
printf("Введіть ціле число b: ");
scanf("%d", &b);
printf("введіть ціле число y: ");
scanf("%d", &y);
while (a<=b*b || a*b<0 || y<0 ){
  if (a <= b*b) {
            printf("Для обчислення кореня потрібне значення a більше, ніж b*b\n");
        }
        if (a*b < 0) {
            printf("Для обчислення кореня потрібне значення a та b одного знаку\n");
        }
        if (y < 0) {
            printf("Для обчислення ділення потрібне значення y більше, ніж 0\n");
        }

        printf("Введіть нові значення змінних a, b та y: ");
        scanf("%d %d %d", &a, &b, &y);
}
x = sqrt(a-b*b) + sqrt(a*b) + y/2.0;

    printf("Значення функції: %.2f\n", x);
return 0;
 }
