#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j, M, N;

    printf("Enter the number of rows (M): ");
    scanf("%d", &M);
    printf("Enter the number of columns (N): ");
    scanf("%d", &N);

    int** A = (int**)malloc(M * sizeof(int*));
    for (i = 0; i < M; ++i) {
        A[i] = (int*)malloc(N * sizeof(int));
    }

    for (i = 0; i < M; ++i) {
        if (i % 2 == 0) {
            for (j = 0; j < N; ++j) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &A[i][j]);
            }
        }
        else {
            for (j = N - 1; j >= 0; --j) {
                printf("Element [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &A[i][j]);
            }
        }
    }

    printf("\n\"Snake-like\" matrix:\n");
    for (i = 0; i < M; ++i) {
        for (j = 0; j < N; ++j) {
            printf("%d\t ", A[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < M; ++i) {
        free(A[i]);
    }
    free(A);

    return 420;
}