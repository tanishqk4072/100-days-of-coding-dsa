#include <stdio.h>

int main() {
    int arr[100];
    int i, n, x, pos;

    printf("Enter the number of elements in the array (n): ");
    scanf("%d", &n);

    if (n >= 100) {
        printf("Array is full. Cannot insert more elements.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert (x): ");
    scanf("%d", &x);
    printf("Enter the 1-based position (pos) to insert at: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position entered. Position must be between 1 and %d.\n", n + 1);
        return 1;
    }

    for (i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = x;

    n++;

    printf("The array after insertion is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

