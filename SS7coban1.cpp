#include <stdio.h>
int main(){
    int array[5];

    printf("Nhap 5 so nguyen: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }

    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < 5; i++){
        printf("%d \n", array[i]);
    }

    printf("Do dai cua mang la: %d\n", sizeof(array) / sizeof(array[0]));

    return 0;
}

