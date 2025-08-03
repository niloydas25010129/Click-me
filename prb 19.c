#include <stdio.h>
#include <math.h>

int main() {
    int num, original, rem, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;
    while (original != 0) {
        original /= 10;
        ++n;
    }

    original = num;

    while (original != 0) {
        rem = original % 10;
        result += pow(rem, n);
        original /= 10;
    }


