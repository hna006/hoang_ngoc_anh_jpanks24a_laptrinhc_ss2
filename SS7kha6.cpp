#include <stdio.h>
int main(){
    int array[5] = {24, 4, 20, 0, 6};
    int n = 5;

    for (int i = 0; i < n; i++){
        if (array[i] % 2 == 0){
            array[i] += 3;
        } else {
            array[i] += 2;
        }
    }
    printf("Mang moi sau khi thay doi la:\n");
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    return 0;
}
