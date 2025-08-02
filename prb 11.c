#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num;

    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }

    printf("Sum of digits of %d = %d\n", num, sum);

    return 0;
}

