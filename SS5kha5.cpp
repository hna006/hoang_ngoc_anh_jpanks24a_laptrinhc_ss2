#include <stdio.h>

int main() {
    int i;
    int n;

    for (i = 1; i <= 9; ++i) {
        printf("Ban cuu chuong %d:\n", i);
        for (n = 1; n <= 10; ++n) {
            printf("%d x %d = %d\n", i, n, i * n);
        }
        printf("\n");
    }

    return 0;
}
