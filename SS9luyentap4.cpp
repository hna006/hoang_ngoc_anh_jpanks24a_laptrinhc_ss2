#include <stdio.h>
int main(){
    int array[100];
    int n, choice, pos, value;

    do {
        printf("MENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("0. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("Nhap so luong phan tu: ");
                scanf("%d", &n);
                printf("Nhap cac phan tu:\n");
                for (int i = 0; i < n; i++){
                    scanf("%d", &array[i]);
                }
                break;
            case 2:
                printf("Mang hien tai:\n");
                for (int i = 0; i < n; i++){
                    printf("%d ", array[i]);
                }
                printf("\n");
                break;
            case 3:
                printf("Nhap vi tri muon them: ");
                scanf("%d", &pos);
                printf("Nhap gia tri muon them: ");
                scanf("%d", &value);
                if (pos >= 0 && pos <= n) {
                    for (int i = n; i > pos; i--){
                        array[i] = array[i - 1];
                    }
                    array[pos] = value;
                    n++;
                } else {
                    printf("Vi tri them khong hop le!\n");
                }
                break;
            case 4:
                printf("Nhap vi tri muon sua: ");
                scanf("%d", &pos);
                if (pos >= 0 && pos < n) {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &value);
                    array[pos] = value;
                } else {
                    printf("Vi tri sua khong hop le!\n");
                }
                break;
            case 5:
                printf("Nhap vi tri muon xoa: ");
                scanf("%d", &pos);
                if (pos >= 0 && pos < n) {
                    for (int i = pos; i < n - 1; i++){
                        array[i] = array[i + 1];
                    }
                    n--;
                } else {
                    printf("Vi tri xoa khong hop le!\n");
                }
                break;
            case 0:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);

    return 0;
}

