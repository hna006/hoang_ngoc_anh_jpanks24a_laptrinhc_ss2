#include <stdio.h>

int main() {
    int number;
	int i;

    do {
        printf("Nhap vao mot so nguyen duong tu 1 den 10: ");
        scanf("%d", &number);
    } 
	while (number < 1 || number > 10);
	printf("Bang cuu chuong cua %d:\n", number);
	
    for (i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
