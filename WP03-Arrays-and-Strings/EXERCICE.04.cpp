
#include <stdio.h>
int main() {
    int L, M, N, i, j;
    float E;
    printf("Welcome to the Merge and Sort Two Arrays program !\n");
    printf("Enter size of array A and B:\n");
    scanf("%d", &L);
    scanf("%d", &M);
    if ((L <= 0) || (M <= 0)) {
        printf("Invalid size!");
        return 0;
    }
    N = L + M;
    float A[L], B[M], C[N];
    printf("Enter elements of array A:\n");
    for (i = 0; i < L; i++) {
        printf("A[%d]=", i);
        scanf("%f", &A[i]);
    }
    printf("Enter elements of array B:\n");
    for (i = 0; i < M; i++) {
        printf("B[%d]=", i);
        scanf("%f", &B[i]);
    }
    for (i = 0; i < L; i++) {
        C[i] = A[i];
    }
    for (i = 0; i < M; i++) {
        C[L + i] = B[i];
    }
    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (C[i] > C[j]) {
                E = C[i];
                C[i] = C[j];
                C[j] = E;
            }
        }
    }
    printf("Merged and sorted array C:\n");
    for (i = 0; i < N; i++) {
        printf("%f ", C[i]);
    }
    return 0;
}

