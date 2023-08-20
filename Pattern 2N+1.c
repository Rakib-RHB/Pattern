#include <stdio.h>

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    printPattern(x);

    return 0;
}

