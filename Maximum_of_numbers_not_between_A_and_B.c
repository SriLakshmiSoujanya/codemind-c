#include<stdio.h>

int main() {
    int i, n, A, B, p, q;

    // Input
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d%d", &A, &B);

    // Find the maximum element not in between A and B
    p = -1; // Initialize p to an invalid index
    for (i = 0; i < n; i++) {
        if (arr[i] < A || arr[i] > B) {
            p = i;
        }
    }

    // If no element is outside A and B, print -1 and exit
    if (p == -1) {
        printf("-1");
        return 0;
    }

    // Find the maximum element in the array
    q = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > q) {
            q = arr[i];
        }
    }

    // Output
    printf("%d", q);

    return 0;
}
