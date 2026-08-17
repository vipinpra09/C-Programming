#include <stdio.h>

int main() {
    int m, n, p, i, j, k;

    printf("Enter number of rows for matrix 1: ");
    scanf("%d", &m);
    printf("Enter number of columns for matrix 1 (and rows for matrix 2): ");
    scanf("%d", &n);
    printf("Enter number of columns for matrix 2: ");
    scanf("%d", &p);

    int A[m][n], B[n][p], C[m][p];
    printf("\nEnter elements of matrix 1:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter elements of matrix 2:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nResultant Matrix (Multiplication):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
