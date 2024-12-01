#include <stdio.h>
int main(){
    int numbers;
    
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &numbers);

    int array[numbers];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < numbers; i++){
        scanf("%d", &array[i]);
    }

    int index, newValue;
    
    printf("Nhap vi tri can sua: ");
    scanf("%d", &index);

    if (index >= 0 && index < numbers){
        printf("Nhap gia tri moi: ");
        scanf("%d", &newValue);

        array[index] = newValue;

        printf("Mang sau khi sua:\n");
        for (int i = 0; i < numbers; i++){
            printf("%d ", array[i]);
        }
    } else {
        printf("Vi tri nhap vao khong hop le!\n");
    }

    return 0;
}

