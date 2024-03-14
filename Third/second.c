// Diamond (ex.)

# include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows (odd): ");
    scanf("%d", &n);

    for (int i = 1; i <= n / 2 + 1; i++) {
        for (int j = 1; j <= (n - i * 2) + 1; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i * 2 - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i <= n / 2; i++) {
        for (int j = 1; j <= i * 2; j++) {
            printf(" ");
        }
        for (int k = n; k >= i * 2 + 1; k--) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
