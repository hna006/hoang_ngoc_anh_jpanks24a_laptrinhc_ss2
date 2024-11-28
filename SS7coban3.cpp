#include <stdio.h>
int main(){
    int array[5];

    printf("Nhap 5 so nguyen: ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }

    int count = 0;
    printf("Cac so chan trong mang la: ");
    for (int i = 0; i < 5; i++){
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
            count++;
        }
    }
    if (count == 0){
        printf("Mang khong chua so chan.\n");
    }
    
    return 0;
}

