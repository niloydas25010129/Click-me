#include <stdio.h>

int main() {
    int num, original, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (original == rev) {
        printf("%d is a Palindrome.\n", original);
    } else {
        printf("%d is not a Palindrome.\n", original);
    }

    return 0;
}

