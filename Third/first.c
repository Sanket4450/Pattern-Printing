// Diamond

# include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n / 2 + 1; i++) {
        for (int j = n / 2; j >= i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i <= n / 2; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        for (int k = n / 2; k >= i; k--) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
