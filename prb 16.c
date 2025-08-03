#include <stdio.h>
int main() {
    int n, i;
    float arr[100], largest;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }
    largest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element is: %.2f\n", largest);

    return 0;
}

