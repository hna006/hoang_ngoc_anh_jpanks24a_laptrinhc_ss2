#include <stdio.h>
int main() {
    int number;
    printf("Hay nhap mot so nguyen: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("So ban nhap l� so duong.\n");
    } else if (number < 0) {
        printf("So ban nhap l� so �m.\n");
    } else {
        printf("So ban nhap l� so 0.\n");
    }
    return 0;
}
