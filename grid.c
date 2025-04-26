#include <stdio.h>

int main() {
    int M, N;
    printf("Enter number of rows (M): ");
    scanf("%d", &M);
    printf("Enter number of columns (N): ");
    scanf("%d", &N);

    for (int i = 0; i < M; i++) {
        // Print top border of row
        for (int j = 0; j < N; j++) {
            printf("+--");
        }
        printf("+\n");

        // Print verticals of row
        for (int j = 0; j < N; j++) {
            printf("|  ");
        }
        printf("|\n");
    }

    // Final bottom border
    for (int j = 0; j < N; j++) {
        printf("+--");
    }
    printf("+\n");

    return 0;
}
