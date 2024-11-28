#include <stdio.h>
int main(){
    int n, i;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int array[n];
    
    printf("Nhap cac phan tu co trong mang:\n");
    for (i = 0; i < n; ++i){
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Mang vua nhap la:\n");
    for (i = 0; i < n; ++i){
        printf("%d ", array[i]);
    }

    return 0;
}

