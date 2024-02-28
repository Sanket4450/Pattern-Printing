// Inverted Full Pyramid

# include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i * 2 - 2; j++) {
            printf(" ");
        }
        for (int k = n * 2; k >= i * 2; k--) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
