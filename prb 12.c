#include <stdio.h>

int main() {
    int n, i;
    long long a = 2, b = 3, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    if (n >= 1)
        printf("%lld ", a);
    if (n >= 2)
        printf("%lld ", b);

    for (i = 3; i <= n; i++) {
        next = a * b;
        printf("%lld ", next);
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
