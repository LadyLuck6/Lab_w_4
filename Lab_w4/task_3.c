#include <stdio.h>

int main() {
    int i, j, s, p;
    for (i = 1; i <= 10; i++) 
   { for (j = 1; j <= i; j++) 
    s*=(i+j);
    p+=s;
    }
    printf("p=%d\n");
    return 0;
}
