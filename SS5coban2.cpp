#include <stdio.h>

int main() {
    int sochotruoc = 20;
    int number;
    
    for (;;) {
        printf("Nhap vao mot so: ");
        scanf("%d", &number);

        if (number == sochotruoc) {
            printf(" So ban nhap trung voi so cho truoc\n");
            break;
        } else {
            printf(" So ban nhap khong trung voi so cho truoc. Vui long nhap lai\n ");
        }
    }

    return 0;
}

