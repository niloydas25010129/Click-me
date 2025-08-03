#include <stdio.h>
int main() {
    int n, i;
    int arr[100], smallest;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    smallest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("The smallest element is: %d\n", smallest);

    return 0;
}

