// Inverted Full Pyramid (ex.)

# include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (i * 2 - i) - 1; j++) {
            printf(" ");
        }
        for (int k = n; k >= i; k--) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
