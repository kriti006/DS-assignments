#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4};
    int B[] = {3, 4, 5, 6};
    int n1 = sizeof(A) / sizeof(A[0]);
    int n2 = sizeof(B) / sizeof(B[0]);

    int hash[1000] = {0};   // simple hash set

    // Store all elements of A in hash
    for (int i = 0; i < n1; i++) {
        hash[A[i]] = 1;
    }

    // Check common elements
    for (int i = 0; i < n2; i++) {
        if (hash[B[i]] == 1) {
            printf("%d ", B[i]);
        }
    }

    return 0;
}
