#include <stdio.h>
int main() {
    int base = 2, exp;
    int result = 1;
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %d", result);
    return 0;
}
