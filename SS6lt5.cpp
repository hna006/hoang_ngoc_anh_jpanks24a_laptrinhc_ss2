#include <stdio.h>
int main(){
    int n;
    int i;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);

    printf("Cac uoc cua %d la: ", n);

    for (i = 1; i <= n/2; i++){
        if (n % i == 0){
            printf("%d ", i);
        }
    }

    return 0;
}

