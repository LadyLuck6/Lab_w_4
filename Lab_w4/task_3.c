#include <stdio.h>

int main()
{
    int i, j, s, p;//оголошення змінних
    for (i = 1; i <= 10; i++)
    {//внутр цикл
        for (j = 1; j <= i; j++)
            s *= (i + j);
      
    }
    printf("%d\n");
    return 0;
}
